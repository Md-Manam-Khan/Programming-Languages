#include <stdio.h>
int main()
{
    int row, column, i, j;
    printf("Number of rows:");
    scanf("%d",&row);
    for (i = 0; i < row; i++)
    {
        for (j = row; j > i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}