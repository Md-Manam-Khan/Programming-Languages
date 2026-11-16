public class aact_PatternMatchingInstanceof
{
    public static void main(String[] args)
    {
        Object obj;
        obj = "Hello Java";
        if (obj instanceof String s)
        {
            System.out.println("String of length " + s.length());
        }
        obj = 42;
        if (obj instanceof Integer i && i > 40)
        {
            System.out.println("Integer greater than 40: " + i);
        }
        obj = 3.14;
        if (!(obj instanceof String s))
        {
            System.out.println("Not a string");
        }
        describe("Manam");
        describe(100);
        describe(2.5);
        describe(true);
        describe(null);
    }
    static void describe(Object o)
    {
        if (o instanceof String s)
        {
            System.out.println("String: " + s.toUpperCase());
        }
        else if (o instanceof Integer i)
        {
            System.out.println("Integer doubled: " + (i * 2));
        }
        else if (o instanceof Double d)
        {
            System.out.println("Double rounded: " + Math.round(d));
        }
        else
        {
            System.out.println("Unknown: " + o);
        }
    }
}
