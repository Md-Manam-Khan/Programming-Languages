#include <stdio.h>
int recursiveArraySum(int a[], int n);
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
    result = recursiveArraySum(a, n);
    printf("Sum: %d", result);
    return 0;
}
int recursiveArraySum(int a[], int n)
{
    if(n == 0)
    {
        return 0;
    }
    return a[n - 1] + recursiveArraySum(a, n - 1);
}
