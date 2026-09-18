#include <stdio.h>
void matrixMultiplication(int a[][10], int b[][10], int result[][10], int row1, int col1, int col2);
int main()
{
    int row1, col1, row2, col2, i, j;
    printf("Input rows and columns of first matrix: ");
    scanf("%d %d", &row1, &col1);
    printf("Input rows and columns of second matrix: ");
    scanf("%d %d", &row2, &col2);
    if(col1 != row2)
    {
        printf("Multiplication not possible");
        return 0;
    }
    int manam[10][10], khan[10][10], result[10][10];
    printf("Input first matrix values:\n");
    for(i = 0; i < row1; i++)
    {
        for(j = 0; j < col1; j++)
        {
            scanf("%d", &manam[i][j]);
        }
    }
    printf("Input second matrix values:\n");
    for(i = 0; i < row2; i++)
    {
        for(j = 0; j < col2; j++)
        {
            scanf("%d", &khan[i][j]);
        }
    }
    matrixMultiplication(manam, khan, result, row1, col1, col2);
    printf("Resultant matrix:\n");
    for(i = 0; i < row1; i++)
    {
        for(j = 0; j < col2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
void matrixMultiplication(int a[][10], int b[][10], int result[][10], int row1, int col1, int col2)
{
    int i, j, k, sum;
    for(i = 0; i < row1; i++)
    {
        for(j = 0; j < col2; j++)
        {
            sum = 0;
            for(k = 0; k < col1; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            result[i][j] = sum;
        }
    }
}
