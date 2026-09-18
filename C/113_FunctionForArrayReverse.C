#include <stdio.h>
void reverseArray(int a[], int n);
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
    reverseArray(a, n);
    printf("Reversed array: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
void reverseArray(int a[], int n)
{
    int i, temp;
    for(i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
}