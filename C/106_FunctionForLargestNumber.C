#include <stdio.h>
int largest(int a, int b, int c);
int main()
{
    int a, b, c, result;
    printf("Input three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    result = largest(a, b, c);
    printf("Largest number: %d", result);
    return 0;
}
int largest(int a, int b, int c)
{
    int largest;
    if ((a > b) && (a > c))
    {
        largest = a;
    }
    else if (b > c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }
    return largest;
}