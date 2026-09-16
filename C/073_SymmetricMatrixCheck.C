#include <stdio.h>
int main()
{
    int n, i, j, symmetric = 1;
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
        for(j = 0; j < n; j++)
        {
            if(a[i][j] != a[j][i])
            {
                symmetric = 0;
                break;
            }
        }
        if(symmetric == 0)
        {
            break;
        }
    }
    if(symmetric == 1)
    {
        printf("Symmetric matrix");
    }
    else
    {
        printf("Not a symmetric matrix");
    }
    return 0;
}