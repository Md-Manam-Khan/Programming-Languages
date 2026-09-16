#include <stdio.h>
int add(int a, int b);
int main()
{
    int a, b, result;
    printf("Input two numbers: ");
    scanf("%d %d", &a, &b);
    result = add(a, b);
    printf("Sum: %d", result);
    return 0;
}
int add(int a, int b)
{
    return a + b;
}