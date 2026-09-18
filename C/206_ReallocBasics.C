#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, newSize, i;
    printf("Input the initial size: ");
    scanf("%d", &n);
    int *a = (int*)malloc(n * sizeof(int));
    printf("Input the elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Input the new size: ");
    scanf("%d", &newSize);
    a = (int*)realloc(a, newSize * sizeof(int));
    if(a == NULL)
    {
        printf("Reallocation failed");
        return 0;
    }
    printf("Input the new elements: ");
    for(i = n; i < newSize; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Final array: ");
    for(i = 0; i < newSize; i++)
    {
        printf("%d ", a[i]);
    }
    free(a);
    return 0;
}
