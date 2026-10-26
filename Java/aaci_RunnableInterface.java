public class aaci_RunnableInterface
{
    public static void main(String[] args)
    {
        Thread t1;
        Thread t2;
        t1 = new Thread(new PrintTask("Download", 3));
        t2 = new Thread(new PrintTask("Upload", 2));
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
        System.out.println("All tasks are complete");
    }
}
class PrintTask implements Runnable
{
    String task;
    int times;
    PrintTask(String task, int times)
    {
        this.task = task;
        this.times = times;
    }
    public void run()
    {
        int i;
        for (i = 1; i <= times; i++)
        {
            System.out.println(task + " progress: " + i + "/" + times);
        }
    }
}
