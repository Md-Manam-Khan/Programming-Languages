#include <stdio.h>
int main()
{
    int i, n, x, a[100], found = -1;
    printf("Input the number of elements: ");
    scanf("%d", &n);
    printf("Input the elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Input the value to search: ");
    scanf("%d", &x);
    for(i = 0; i < n; i++)
    {
        if(a[i] == x)
        {
            found = i;
            break;
        }
    }
    if(found != -1)
    {
        printf("Value found at index %d", found);
    }
    else
    {
        printf("Value not found");
    }
    return 0;
}