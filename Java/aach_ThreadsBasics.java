public class aach_ThreadsBasics
{
    public static void main(String[] args)
    {
        MyThread t1;
        MyThread t2;
        t1 = new MyThread("Thread-A");
        t2 = new MyThread("Thread-B");
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
        System.out.println("Both threads have finished");
    }
}
class MyThread extends Thread
{
    String name;
    MyThread(String name)
    {
        this.name = name;
    }
    public void run()
    {
        int i;
        for (i = 1; i <= 3; i++)
        {
            System.out.println(name + " is running, step " + i);
        }
    }
}
