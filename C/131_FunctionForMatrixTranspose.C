#include <stdio.h>
void matrixTranspose(int a[][10], int result[][10], int row, int col);
int main()
{
    int row, col, i, j;
    printf("Input rows and columns: ");
    scanf("%d %d", &row, &col);
    int manam[10][10], result[10][10];
    printf("Input matrix values:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &manam[i][j]);
        }
    }
    matrixTranspose(manam, result, row, col);
    printf("Transposed matrix:\n");
    for(i = 0; i < col; i++)
    {
        for(j = 0; j < row; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
void matrixTranspose(int a[][10], int result[][10], int row, int col)
{
    int i, j;
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            result[j][i] = a[i][j];
        }
    }
}
