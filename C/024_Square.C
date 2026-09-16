#include <stdio.h>
int main()
{
    int row, column, i, j;
    printf("Number of rows:");
    scanf("%d",&row);
    printf("Number of columns:");
    scanf("%d",&column);
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}