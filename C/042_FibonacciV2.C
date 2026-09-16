#include<stdio.h>
int main()
{
    int i, n;
    printf("Input the number of elements: ");
    scanf("%d", &n);
    int manam[n];
    printf("Input the first value: ");
    scanf("%d", &manam[0]);
    printf("Input the second  value: ");
    scanf("%d", &manam[1]);
    for(i = 2; i < n; i++)
    {
        manam[i] = manam[i - 1] + manam[i - 2];
    }
    printf("The fibonacci series: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", manam[i]);
    }
    return 0;
}
