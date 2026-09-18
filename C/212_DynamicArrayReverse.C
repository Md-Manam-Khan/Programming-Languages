#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, temp;
    printf("Input the size of array: ");
    scanf("%d", &n);
    int *a = (int*)malloc(n * sizeof(int));
    printf("Input the elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
    printf("Reversed array: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    free(a);
    return 0;
}
