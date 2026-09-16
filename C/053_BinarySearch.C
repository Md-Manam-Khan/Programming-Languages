#include<stdio.h>
int main()
{
    int n, i, left, mid, high, target, found = -1;
    printf("Array element no: ");
    scanf("%d", &n);
    int manam[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &manam[i]);
    }
    printf("\nThe Array elements are: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", manam[i]);
    }
    printf("\nThe value I am looking for: ");
    scanf("%d", &target);
    left = 0;
    high = n - 1;
    while(left <= high)
    {
        mid= left + (high - left) / 2;
        if (manam[mid] == target)
        {
            found = mid;
            break;
        }
        else if (manam[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (found == -1)
    {
       printf("\nDesired value %d not found in the array", target); 
    }
    else
    {
        printf("\nDesired value %d found in the array at position %d", target, found + 1); 
    }
    return 0;
}