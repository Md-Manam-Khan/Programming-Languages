public class aabc_DefaultAndStaticInterfaceMethods
{
    public static void main(String[] args)
    {
        Greeter g1;
        g1 = new EnglishGreeter();
        g1.greet();
        g1.welcome();
        Greeter.info();
    }
}
interface Greeter
{
    void greet();
    default void welcome()
    {
        System.out.println("Welcome, default greeting");
    }
    static void info()
    {
        System.out.println("This is the Greeter interface");
    }
}
class EnglishGreeter implements Greeter
{
    public void greet()
    {
        System.out.println("Hello there");
    }
}