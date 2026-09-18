#include <stdio.h>
int arrayFrequency(int a[], int n, int x);
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
    printf("Input the value to find frequency of: ");
    scanf("%d", &x);
    result = arrayFrequency(a, n, x);
    printf("Frequency: %d", result);
    return 0;
}
int arrayFrequency(int a[], int n, int x)
{
    int i, count = 0;
    for(i = 0; i < n; i++)
    {
        if(a[i] == x)
        {
            count++;
        }
    }
    return count;
}
