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
    for(j = 0; j < column; j++)
    {
        sum = 0;
        for(i = 0; i < row; i++)
        {
            sum = sum + a[i][j];
        }
        printf("Sum of column %d: %d\n", j + 1, sum);
    }
    return 0;
}