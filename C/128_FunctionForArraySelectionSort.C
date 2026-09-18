#include <stdio.h>
void arraySelectionSort(int a[], int n);
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
    arraySelectionSort(a, n);
    printf("Sorted array: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
void arraySelectionSort(int a[], int n)
{
    int i, j, minIndex, temp;
    for(i = 0; i < n - 1; i++)
    {
        minIndex = i;
        for(j = i + 1; j < n; j++)
        {
            if(a[j] < a[minIndex])
            {
                minIndex = j;
            }
        }
        temp = a[i];
        a[i] = a[minIndex];
        a[minIndex] = temp;
    }
}
