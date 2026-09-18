#include <stdio.h>
int arraySecondLargest(int a[], int n);
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
    result = arraySecondLargest(a, n);
    printf("Second largest: %d", result);
    return 0;
}
int arraySecondLargest(int a[], int n)
{
    int i, large, secondLarge;
    large = a[0] > a[1] ? a[0] : a[1];
    secondLarge = a[0] > a[1] ? a[1] : a[0];
    for(i = 2; i < n; i++)
    {
        if(a[i] > large)
        {
            secondLarge = large;
            large = a[i];
        }
        else if(a[i] > secondLarge)
        {
            secondLarge = a[i];
        }
    }
    return secondLarge;
}
