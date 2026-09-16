#include <stdio.h>
int main()
{

    int n, i, largest, secondLargest;
    printf("Input the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Input the elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    largest = a[0];
    secondLargest = a[0];
    for(i = 1; i < n; i++)
    {
        if(a[i] > largest)
        {
            secondLargest = largest;
            largest = a[i];
        }
        else if(a[i] > secondLargest && a[i] != largest)
        {
            secondLargest = a[i];
        }
    }
    printf("Second largest element: %d", secondLargest);
    return 0;
}