#include <stdio.h>
int main()
{
    int n, i;
    printf("Input the size of array: ");
    scanf("%d", &n);
    int a[n];
    int *p = a;
    printf("Input the elements of array: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Elements using pointer: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }
    return 0;
}
