public class aacj_ThreadSynchronization
{
    public static void main(String[] args)
    {
        Counter counter;
        Thread t1;
        Thread t2;
        counter = new Counter();
        t1 = new Thread(new IncrementTask(counter));
        t2 = new Thread(new IncrementTask(counter));
        t1.start();
        t2.start();
        try
        {
            t1.join();
            t2.join();
        }
        catch (InterruptedException e)
        {
            System.out.println("The main thread was interrupted");
        }
        System.out.println("Final count: " + counter.getCount());
    }
}
class Counter
{
    private int count = 0;
    synchronized void increment()
    {
        count = (count + 1);
    }
    int getCount()
    {
        return count;
    }
}
class IncrementTask implements Runnable
{
    Counter counter;
    IncrementTask(Counter counter)
    {
        this.counter = counter;
    }
    public void run()
    {
        int i;
        for (i = 0; i < 1000; i++)
        {
            counter.increment();
        }
    }
}
