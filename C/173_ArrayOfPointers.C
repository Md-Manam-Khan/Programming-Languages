#include <stdio.h>
int main()
{
    int n, i;
    printf("Input the number of values: ");
    scanf("%d", &n);
    int a[n];
    int *p[n];
    printf("Input the values: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        p[i] = &a[i];
    }
    printf("Values using array of pointers: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", *p[i]);
    }
    return 0;
}
