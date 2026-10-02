public class aaaz_AbstractClasses
{
    public static void main(String[] args)
    {
        Worker w1;
        w1 = new Developer();
        w1.work();
    }
}
abstract class Worker
{
    abstract void work();
    void rest()
    {
        System.out.println("Taking a break");
    }
}
class Developer extends Worker
{
    void work()
    {
        System.out.println("Writing code");
    }
}