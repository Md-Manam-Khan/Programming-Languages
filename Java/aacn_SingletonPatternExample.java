public class aacn_SingletonPatternExample
{
    public static void main(String[] args)
    {
        Logger l1;
        Logger l2;
        l1 = Logger.getInstance();
        l2 = Logger.getInstance();
        l1.log("First message");
        l2.log("Second message");
        System.out.println("Same instance: " + (l1 == l2));
        System.out.println("Messages logged: " + l1.getCount());
    }
}
class Logger
{
    private static Logger instance;
    private int count;
    private Logger()
    {
        count = 0;
    }
    static Logger getInstance()
    {
        if (instance == null)
        {
            instance = new Logger();
        }
        return instance;
    }
    void log(String message)
    {
        count = (count + 1);
        System.out.println("Log " + count + ": " + message);
    }
    int getCount()
    {
        return count;
    }
}
