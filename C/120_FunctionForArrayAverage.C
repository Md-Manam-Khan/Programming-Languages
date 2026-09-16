#include <stdio.h>
float arrayAverage(int a[], int n);
int main()
{
    int n, i;
    float result;
    printf("Input the size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("Input the elements of array: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    result = arrayAverage(a, n);
    printf("Average: %.2f", result);
    return 0;
}
float arrayAverage(int a[], int n)
{
    int i, sum = 0;
    for(i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    return (float)sum / n;
}