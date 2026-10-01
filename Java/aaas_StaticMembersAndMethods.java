public class aaas_StaticMembersAndMethods
{
    public static void main(String[] args)
    {
        Counter c1;
        Counter c2;
        Counter c3;
        c1 = new Counter();
        c2 = new Counter();
        c3 = new Counter();
        System.out.println("Total objects created: " + Counter.getCount());
    }
}
class Counter
{
    static int count = 0;
    Counter()
    {
        count = (count + 1);
    }
    static int getCount()
    {
        return count;
    }
}