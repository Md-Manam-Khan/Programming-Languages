#include <stdio.h>
int main()
{
    int n, i, last;
    printf("Input the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Input the elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    last = a[n - 1];
    for(i = n - 1; i > 0; i--)
    {
        a[i] = a[i - 1];
    }
    a[0] = last;
    printf("Right rotated array: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}