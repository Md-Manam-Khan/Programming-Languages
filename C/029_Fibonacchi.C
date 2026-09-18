#include<stdio.h>
int main()
{
    int a, b, c, i, n;
    printf("Input the first value: ");
    scanf("%d",&a);
    printf("Input the second  value: ");
    scanf("%d", &b);
    printf("Input the number of elements (1 more element will be in fibonacci): ");
    scanf("%d", &n);
    printf("The fibonacci series: ");
    for(i = 0; i <= n; i++)
    {
        printf("%d ",a);
        c = a+b;
        a = b;
        b = c;
    }
    return 0;
}
