#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, large;
    printf("Input the size of array: ");
    scanf("%d", &n);
    int *a = (int*)malloc(n * sizeof(int));
    printf("Input the elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    large = a[0];
    for(i = 1; i < n; i++)
    {
        if(a[i] > large)
        {
            large = a[i];
        }
    }
    printf("Largest: %d", large);
    free(a);
    return 0;
}
