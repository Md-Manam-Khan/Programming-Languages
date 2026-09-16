#include <stdio.h>
int main()
{
    int n, i, first;
    printf("Input the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Input the elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    first = a[0];
    for(i = 0; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    a[n - 1] = first;
    printf("Left rotated array: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}