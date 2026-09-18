#include <stdio.h>
int main()
{
    int n, i, x, found = 0;
    printf("Input the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Input the elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Input the value to search: ");
    scanf("%d", &x);
    printf("Occurrences at positions: ");
    for(i = 0; i < n; i++)
    {
        if(a[i] == x)
        {
            printf("%d ", i + 1);
            found = 1;
        }
    }
    if(found == 0)
    {
        printf("Value not found");
    }
    return 0;
}