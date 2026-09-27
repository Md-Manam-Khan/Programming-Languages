import java.util.*;
public class aaag_MultiDimensionalArrays
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int r, c, i, j;
        System.out.print("Input the number of rows: ");
        r = sc.nextInt();
        System.out.print("Input the number of columns: ");
        c = sc.nextInt();
        int[][] matrix = new int[r][c];
        System.out.println("Input the matrix elements: ");
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                matrix[i][j] = sc.nextInt();
            }
        }
        System.out.println("The matrix is: ");
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }
        int rowSum;
        for (i = 0; i < r; i++)
        {
            rowSum = 0;
            for (j = 0; j < c; j++)
            {
                rowSum = rowSum + matrix[i][j];
            }
            System.out.println("Sum of row " + i + " is: " + rowSum);
        }
    }
}
