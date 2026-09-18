#include <stdio.h>
int square(int n);
int cube(int n);
int isEven(int n);
int main()
{
    int n;
    printf("Input a number: ");
    scanf("%d", &n);
    printf("Square: %d\n", square(n));
    printf("Cube: %d\n", cube(n));
    if(isEven(n))
    {
        printf("%d is even", n);
    }
    else
    {
        printf("%d is odd", n);
    }
    return 0;
}
int square(int n)
{
    return n * n;
}
int cube(int n)
{
    return n * n * n;
}
int isEven(int n)
{
    return (n % 2 == 0);
}
