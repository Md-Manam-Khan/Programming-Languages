#include<stdio.h>
int main()
{
    int i, j, row, column, sum;
    printf("Input the number of rows: ");
    scanf("%d", &row);
    printf("Input the number of columns: ");
    scanf("%d", &column);
    int manam[row][column];
    printf("\nInput the values:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++)
        {
            scanf("%d", &manam[i][j]);
        }
    }
    printf("\nMatrix values:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++)
        {
            printf("%d ", manam[i][j]);
        }
        printf("\n");
    }
    sum = 0;
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++)
        {
            if (i == j)
            {
                sum += manam[i][j];
            }
        }
    }
    printf("\nThe summation: %d", sum);
    return 0;
}
