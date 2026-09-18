#include <stdio.h>
void arrayCountEvenOdd(int a[], int n, int *even, int *odd);
int main()
{
    int n, i, even = 0, odd = 0;
    printf("Input the size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("Input the elements of array: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    arrayCountEvenOdd(a, n, &even, &odd);
    printf("Even: %d\nOdd: %d", even, odd);
    return 0;
}
void arrayCountEvenOdd(int a[], int n, int *even, int *odd)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            (*even)++;
        }
        else
        {
            (*odd)++;
        }
    }
}
