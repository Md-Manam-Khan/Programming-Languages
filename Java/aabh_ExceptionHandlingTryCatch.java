public class aabh_ExceptionHandlingTryCatch
{
    public static void main(String[] args)
    {
        int a, b, result;
        a = 10;
        b = 0;
        try
        {
            result = (a / b);
            System.out.println("Result: " + result);
        }
        catch (ArithmeticException e)
        {
            System.out.println("Cannot divide by zero");
        }
        System.out.println("Program continues after the exception");
    }
}