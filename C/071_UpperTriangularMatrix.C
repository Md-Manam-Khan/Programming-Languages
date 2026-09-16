#include <stdio.h>
int main()
{
    int n, i, j, upper = 1;
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
    for(i = 1; i < n; i++)
    {
        for(j = 0; j < i; j++)
        {
            if(a[i][j] != 0)
            {
                upper = 0;
                break;
            }
        }
        if(upper == 0)
        {
            break;
        }
    }
    if(upper == 1)
    {
        printf("Upper triangular matrix");
    }
    else
    {
        printf("Not an upper triangular matrix");
    }
    return 0;
}