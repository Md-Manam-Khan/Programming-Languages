#include <stdio.h>
int main()
{
    int n, m, i, j, zero = 0, nonzero = 0;
    printf("Input the number of rows and columns: ");
    scanf("%d %d", &n, &m);
    int a[n][m];
    printf("Input the elements of matrix: ");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
            if(a[i][j] == 0)
            {
                zero++;
            }
            else
            {
                nonzero++;
            }
        }
    }
    if(zero > nonzero)
    {
        printf("Sparse matrix");
    }
    else
    {
        printf("Not a sparse matrix");
    }
    return 0;
}