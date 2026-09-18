#include <stdio.h>
int largest(int a[], int n);
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
    result = largest(a, n);
    printf("Largest element: %d", result);
    return 0;
}
int largest(int a[], int n)
{
    int i, largest = a[0];
    for(i = 1; i < n; i++)
    {
        if(a[i] > largest)
        {
            largest = a[i];
        }
    }
    return largest;
}