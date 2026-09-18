#include <stdio.h>
int main()
{
    int row, column, i, j;
    printf("Input the number of rows and columns: ");
    scanf("%d %d", &row, &column);
    int a[row][column], b[row][column], c[row][column];
    printf("Input the elements of first matrix: ");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Input the elements of second matrix: ");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++)
        {
            c[i][j] = a[i][j] - b[i][j];
        }
    }
    printf("Subtraction of matrices:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}