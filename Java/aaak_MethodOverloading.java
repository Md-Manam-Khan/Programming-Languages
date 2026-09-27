public class aaak_MethodOverloading
{
    public static void main(String[] args)
    {
        System.out.println("Sum of two ints: " + add(5, 10));
        System.out.println("Sum of two doubles: " + add(5.5, 10.5));
        System.out.println("Sum of three ints: " + add(5, 10, 15));
    }
    static int add(int a, int b)
    {
        return a + b;
    }
    static double add(double a, double b)
    {
        return a + b;
    }
    static int add(int a, int b, int c)
    {
        return a + b + c;
    }
}
