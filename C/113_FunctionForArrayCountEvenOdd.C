#include <stdio.h>
void countEvenOdd(int a[], int n);
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
    countEvenOdd(a, n);
    return 0;
}
void countEvenOdd(int a[], int n)
{
    int i, even = 0, odd = 0;
    for(i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Even elements: %d\n", even);
    printf("Odd elements: %d", odd);
}