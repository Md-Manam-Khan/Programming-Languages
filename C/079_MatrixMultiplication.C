#include<stdio.h>
int main()
{
    int i, j, k, row1, column1, row2, column2, sum;
    printf("Input the number of rows for the first matrix: ");
    scanf("%d", &row1);
    printf("Input the number of columns for the first matrix: ");
    scanf("%d", &column1);
    int manam[row1][column1];
    printf("\nInput the values:\n");
    for(i = 0; i < row1; i++)
    {
        for(j = 0; j < column1; j++)
        {
            scanf("%d", &manam[i][j]);
        }
    }
    printf("Input the number of rows for the second matrix: ");
    scanf("%d", &row2);
    printf("Input the number of columns for the second matrix: ");
    scanf("%d", &column2);
    int khan[row2][column2];
    printf("\nInput the values:\n");
    for(i = 0; i < row2; i++)
    {
        for(j = 0; j < column2; j++)
        {
            scanf("%d", &khan[i][j]);
        }
    }
    printf("\nMatrix values:");
    printf("\nFirst matrix:\n");
    for(i = 0; i < row1; i++)
    {
        for(j = 0; j < column1; j++)
        {
            printf("%d ", manam[i][j]);
        }
        printf("\n");
    }
    printf("\nSecond matrix:\n");
    for(i = 0; i < row2; i++)
    {
        for(j = 0; j < column2; j++)
        {
            printf("%d ", khan[i][j]);
        }
        printf("\n");
    }
    if (column1 != row2)
    {
        printf("First matrix column and second matrix row is not equal, multiplication not possible.");
    }
    else
    {
        int result[row1][column2]; 

        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < column2; j++)
            {
                sum = 0;
                for (k = 0; k < column1; k++)
                {
                    sum += manam[i][k] * khan[k][j];
                }
                result[i][j] = sum;
            }
        }
        printf("\nResultant matrix (%d x %d):\n", row1, column2);
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < column2; j++)
            {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}