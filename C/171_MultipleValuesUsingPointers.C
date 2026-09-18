#include <stdio.h>
void minMax(int a[], int n, int *min, int *max);
int main()
{
    int n, i, min, max;
    printf("Input the size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("Input the elements of array: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    minMax(a, n, &min, &max);
    printf("Minimum: %d\nMaximum: %d", min, max);
    return 0;
}
void minMax(int a[], int n, int *min, int *max)
{
    int i;
    *min = a[0];
    *max = a[0];
    for(i = 1; i < n; i++)
    {
        if(a[i] < *min)
        {
            *min = a[i];
        }
        if(a[i] > *max)
        {
            *max = a[i];
        }
    }
}
