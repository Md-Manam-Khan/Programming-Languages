#include <stdio.h>
int main()
{
    int n, i, j, smallest, temp;
    printf("Input the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Input the elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n - 1; i++)
    {
        smallest = i;
        for(j = i + 1; j < n; j++)
        {
            if(a[j] < a[smallest])
            {
                smallest = j;
            }
        }
        temp = a[i];
        a[i] = a[smallest];
        a[smallest] = temp;
    }
    printf("Sorted array: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}