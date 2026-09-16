#include <stdio.h>
int main()
{
    int n, i, smallest, secondSmallest;
    printf("Input the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Input the elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    smallest = a[0];
    secondSmallest = a[0];
    for(i = 1; i < n; i++)
    {
        if(a[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = a[i];
        }
        else if((a[i] < secondSmallest) && (a[i] != smallest))
        {
            secondSmallest = a[i];
        }
    }
    printf("Second smallest element: %d", secondSmallest);
    return 0;
}