#include <stdio.h>
int main()
{
    int n, m, i, j;
    printf("Input the number of elements of first array: ");
    scanf("%d", &n);
    int a[n];
    printf("Input the elements of first array: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Input the number of elements of second array: ");
    scanf("%d", &m);
    int b[m];
    printf("Input the elements of second array: ");
    for(i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }
    int c[n + m];
    for(i = 0; i < n; i++)
    {
        c[i] = a[i];
    }
    for(j = 0; j < m; j++)
    {
        c[n + j] = b[j];
    }
    printf("Merged array: ");
    for(i = 0; i < n + m; i++)
    {
        printf("%d ", c[i]);
    }
    return 0;
}