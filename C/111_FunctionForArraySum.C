#include <stdio.h>
int arraySum(int a[], int n);
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
    result = arraySum(a, n);
    printf("Sum: %d", result);
    return 0;
}
int arraySum(int a[], int n)
{
    int i, sum = 0;
    for(i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    return sum;
}