#include <stdio.h>
int main()
{
    int n, i, j, lower = 1;
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
        for(j = i + 1; j < n; j++)
        {
            if(a[i][j] != 0)
            {
                lower = 0;
                break;
            }
        }
        if(lower == 0)
        {
            break;
        }
    }
    if(lower == 1)
    {
        printf("Lower triangular matrix");
    }
    else
    {
        printf("Not a lower triangular matrix");
    }
    return 0;
}