public class aabx_BoundedTypeParameters
{
    public static void main(String[] args)
    {
        System.out.println("Max of ints: " + max(10, 25));
        System.out.println("Max of doubles: " + max(3.5, 1.2));
    }
    static <T extends Comparable<T>> T max(T a, T b)
    {
        if (a.compareTo(b) > 0)
        {
            return a;
        }
        else
        {
            return b;
        }
    }
}