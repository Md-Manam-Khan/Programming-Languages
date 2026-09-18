#include <stdio.h>
int *arrayLargestAddress(int a[], int n);
int main()
{
    int n, i;
    int *p;
    printf("Input the size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("Input the elements of array: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    p = arrayLargestAddress(a, n);
    printf("Largest: %d", *p);
    return 0;
}
int *arrayLargestAddress(int a[], int n)
{
    int i, largestIndex = 0;
    for(i = 1; i < n; i++)
    {
        if(a[i] > a[largestIndex])
        {
            largestIndex = i;
        }
    }
    return &a[largestIndex];
}
