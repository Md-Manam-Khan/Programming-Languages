#include <stdio.h>
int search(int a[], int n, int x);
int main()
{
    int n, i, x, result;
    printf("Input the size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("Input the elements of array: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Input the element to search: ");
    scanf("%d", &x);
    result = search(a, n, x);
    if(result == -1)
    {
        printf("Element not found");
    }
    else
    {
        printf("Element found at index %d", result);
    }
    return 0;
}
int search(int a[], int n, int x)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if(a[i] == x)
        {
            return i;
        }
    }
    return -1;
}