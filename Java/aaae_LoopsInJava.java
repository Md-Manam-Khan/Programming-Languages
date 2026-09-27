public class aaae_LoopsInJava
{
    public static void main(String[] args)
    {
        int i, j, k;
        System.out.println("For loop output: ");
        for (i = 1; i <= 5; i++)
        {
            System.out.print(i + " ");
        }
        System.out.println();
        System.out.println("While loop output: ");
        j = 1;
        while (j <= 5)
        {
            System.out.print(j + " ");
            j++;
        }
        System.out.println();
        System.out.println("Do while loop output: ");
        k = 1;
        do
        {
            System.out.print(k + " ");
            k++;
        } while (k <= 5);
        System.out.println();
    }
}
