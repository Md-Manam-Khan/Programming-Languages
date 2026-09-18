#include <stdio.h>
int recursiveBinarySearch(int a[], int low, int high, int x);
int main()
{
    int n, i, x, result;
    printf("Input the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Input the sorted elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Input the value to search: ");
    scanf("%d", &x);
    result = recursiveBinarySearch(a, 0, n - 1, x);
    if(result != -1)
    {
        printf("Value found at index %d", result);
    }
    else
    {
        printf("Value not found");
    }
    return 0;
}
int recursiveBinarySearch(int a[], int low, int high, int x)
{
    int mid;
    if(low > high)
    {
        return -1;
    }
    mid = (low + high) / 2;
    if(a[mid] == x)
    {
        return mid;
    }
    else if(a[mid] < x)
    {
        return recursiveBinarySearch(a, mid + 1, high, x);
    }
    else
    {
        return recursiveBinarySearch(a, low, mid - 1, x);
    }
}
