#include <stdio.h>
int main()
{
    int row, column, i, j, sum;
    printf("Input the number of rows and columns: ");
    scanf("%d %d", &row, &column);
    int a[row][column];
    printf("Input the elements of matrix: ");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < row; i++)
    {
        sum = 0;
        for(j = 0; j < column; j++)
        {
            sum = sum + a[i][j];
        }
        printf("Sum of row %d: %d\n", i + 1, sum);
    }
    return 0;
}