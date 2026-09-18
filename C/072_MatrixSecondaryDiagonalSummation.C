#include <stdio.h>
int main()
{
    int n, i, j, sum = 0;
    printf("Input the size of square matrix: ");
    scanf("%d", &n);
    int a[n][n];
    printf("Input the elements of matrix: ");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < n; i++)
    {
        sum = sum + a[i][n - 1 - i];
    }
    printf("Sum of secondary diagonal: %d", sum);
    return 0;
}