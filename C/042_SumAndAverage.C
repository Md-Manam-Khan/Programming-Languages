#include<stdio.h>
int main ()
{
    int n, i, sum, avg;
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
    sum = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + manam[i];
    }
    avg = sum / n;
    printf("\nTotal sum of the array elements: %d\nAnd the average of the array elements: %d", sum, avg);
}