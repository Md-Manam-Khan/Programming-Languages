#include <stdio.h>
int main()
{
    int i, n, x, a[100];
    printf("Input the number of elements: ");
    scanf("%d", &n);
    printf("Input the elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Input the value to remove: ");
    scanf("%d", &x);
    for(i = 0; i < n; i++)
    {
        if(a[i] == x)
        {
            for(int j = i; j < n - 1; j++)
            {
                a[j] = a[j + 1];
            }
            --n;
            --i;
        }
    }
    printf("Array after removing all occurrences: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}