public class aaal_VarargsInJava
{
    public static void main(String[] args)
    {
        System.out.println("Sum: " + sum(1, 2, 3));
        System.out.println("Sum: " + sum(1, 2, 3, 4, 5));
        System.out.println("Sum: " + sum());
    }
    static int sum(int... numbers)
    {
        int total = 0;
        for (int n : numbers)
        {
            total = total + n;
        }
        return total;
    }
}