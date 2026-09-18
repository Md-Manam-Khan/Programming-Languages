#include <stdio.h>
void matrixSum(int a[][10], int b[][10], int result[][10], int row, int col);
int main()
{
    int row, col, i, j;
    printf("Input rows and columns: ");
    scanf("%d %d", &row, &col);
    int manam[10][10], khan[10][10], result[10][10];
    printf("Input first matrix values:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &manam[i][j]);
        }
    }
    printf("Input second matrix values:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &khan[i][j]);
        }
    }
    matrixSum(manam, khan, result, row, col);
    printf("Resultant matrix:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
void matrixSum(int a[][10], int b[][10], int result[][10], int row, int col)
{
    int i, j;
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}
