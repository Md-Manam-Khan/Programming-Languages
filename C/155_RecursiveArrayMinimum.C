#include <stdio.h>
int recursiveArrayMinimum(int a[], int n);
int main()
{
    int n, i, result;
    printf("Input the size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("Input the elements of array: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    result = recursiveArrayMinimum(a, n);
    printf("Minimum: %d", result);
    return 0;
}
int recursiveArrayMinimum(int a[], int n)
{
    int rest;
    if(n == 1)
    {
        return a[0];
    }
    rest = recursiveArrayMinimum(a, n - 1);
    return a[n - 1] < rest ? a[n - 1] : rest;
}
