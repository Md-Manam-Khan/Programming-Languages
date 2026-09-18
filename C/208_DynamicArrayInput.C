#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i;
    printf("Input the size of array: ");
    scanf("%d", &n);
    int *a = (int*)malloc(n * sizeof(int));
    printf("Input the elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Array: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    free(a);
    return 0;
}
