public class aabe_AnonymousClasses
{
    public static void main(String[] args)
    {
        Task t1;
        t1 = new Task()
        {
            void run()
            {
                System.out.println("Running the anonymous task");
            }
        };
        t1.run();
    }
}
abstract class Task
{
    abstract void run();
}