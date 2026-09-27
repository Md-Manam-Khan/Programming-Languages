import java.util.*;
public class aaaf_ArraysInJava
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n, i, sum;
        System.out.print("Input the number of elements: ");
        n = sc.nextInt();
        int[] arr = new int[n];
        System.out.println("Input the elements: ");
        for (i = 0; i < n; i++)
        {
            arr[i] = sc.nextInt();
        }
        sum = 0;
        for (i = 0; i < n; i++)
        {
            sum = sum + arr[i];
        }
        System.out.println("The elements are: " + Arrays.toString(arr));
        System.out.println("The sum is: " + sum);
    }
}
