#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, small;
    printf("Input the size of array: ");
    scanf("%d", &n);
    int *a = (int*)malloc(n * sizeof(int));
    printf("Input the elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    small = a[0];
    for(i = 1; i < n; i++)
    {
        if(a[i] < small)
        {
            small = a[i];
        }
    }
    printf("Smallest: %d", small);
    free(a);
    return 0;
}
