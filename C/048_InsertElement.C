#include <stdio.h>
int main()
{
    int n, i, position, value;
    printf("Input the number of elements: ");
    scanf("%d", &n);
    int a[n + 1];
    printf("Input the elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Input the position: ");
    scanf("%d", &position);
    printf("Input the value: ");
    scanf("%d", &value);
    for(i = n; i >= position; i--)
    {
        a[i] = a[i - 1];
    }
    a[position - 1] = value;
    printf("Array after insertion: ");
    for(i = 0; i <= n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}