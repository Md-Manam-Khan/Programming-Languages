#include <stdio.h>
int main()
{
    int n, i, position;
    printf("Input the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Input the elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Input the position: ");
    scanf("%d", &position);
    for(i = position - 1; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    printf("Array after deletion: ");
    for(i = 0; i < n - 1; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}