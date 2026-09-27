public class aaaj_MethodsAndParameters
{
    public static void main(String[] args)
    {
        int result = add(5, 10);
        System.out.println("The sum is: " + result);
        greet("Manam");
    }
    static int add(int a, int b)
    {
        return a + b;
    }
    static void greet(String name)
    {
        System.out.println("Hello, " + name);
    }
}