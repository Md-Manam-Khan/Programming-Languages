import java.util.concurrent.*;
public class aack_ExecutorServiceBasics
{
    public static void main(String[] args)
    {
        ExecutorService pool;
        Future<Integer> result;
        int i;
        pool = Executors.newFixedThreadPool(2);
        for (i = 1; i <= 3; i++)
        {
            pool.execute(new JobTask(i));
        }
        result = pool.submit(new SquareTask(7));
        try
        {
            System.out.println("Square of 7: " + result.get());
            pool.shutdown();
            pool.awaitTermination(5, TimeUnit.SECONDS);
        }
        catch (InterruptedException | ExecutionException e)
        {
            System.out.println("The executor was interrupted");
        }
        System.out.println("The pool has shut down");
    }
}
class JobTask implements Runnable
{
    int id;
    JobTask(int id)
    {
        this.id = id;
    }
    public void run()
    {
        System.out.println("Job " + id + " is being handled by a pool thread");
    }
}
class SquareTask implements Callable<Integer>
{
    int number;
    SquareTask(int number)
    {
        this.number = number;
    }
    public Integer call()
    {
        return (number * number);
    }
}
