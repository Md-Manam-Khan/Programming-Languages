#include <stdio.h>
void recursiveArrayReverse(int a[], int start, int end);
int main()
{
    int n, i;
    printf("Input the size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("Input the elements of array: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    recursiveArrayReverse(a, 0, n - 1);
    printf("Reversed array: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
void recursiveArrayReverse(int a[], int start, int end)
{
    int temp;
    if(start >= end)
    {
        return;
    }
    temp = a[start];
    a[start] = a[end];
    a[end] = temp;
    recursiveArrayReverse(a, start + 1, end - 1);
}
