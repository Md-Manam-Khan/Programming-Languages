#include <stdio.h>
int main()
{
    int row, column, i, j;
    printf("Number of rows:");
    scanf("%d",&row);
    for (i = 0; i < row; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}