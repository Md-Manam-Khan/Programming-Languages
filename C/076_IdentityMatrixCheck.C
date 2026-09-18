#include <stdio.h>
int main()
{
    int n, i, j, identity = 1;
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
            if(i == j)
            {
                if(a[i][j] != 1)
                {
                    identity = 0;
                    break;
                }
            }
            else
            {
                if(a[i][j] != 0)
                {
                    identity = 0;
                    break;
                }
            }
        }
        if(identity == 0)
        {
            break;
        }
    }
    if(identity == 1)
    {
        printf("Identity matrix");
    }
    else
    {
        printf("Not an identity matrix");
    }
    return 0;
}