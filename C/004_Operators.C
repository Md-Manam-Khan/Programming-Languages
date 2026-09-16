#include <stdio.h>
int main ()
{
    int a, b, c;
    printf("Input a value(greater than zero): ");
    scanf("%d", &a);
    printf("Input another value (greater than zero): ");
    scanf("%d", &b);
    c = a + b;
    printf("Addition: %d\n",c);
    c = a - b;
    printf("Subtraction: %d\n",c);
    c = a * b;
    printf("Multiplication: %d\n",c);
    c = a / b;
    printf("Division: %d\n",c);
    c = a % b;
    printf("Remainder: %d\n",c);
    c = ++a;
    printf("Prefix increment: c = %d, a = %d\n", c, a);
    c = a++;
    printf("Postfix increment: c = %d, a = %d\n", c, a);
    c = --a;
    printf("Prefix decrement: c = %d, a = %d\n", c, a);
    c = a--;
    printf("Postfix decrement: c = %d, a = %d\n", c, a);
    c = (a > b) ? a : b;
    printf("Greatest value: %d\n", c);
    c= a & b;
    printf("Bitwise AND: %d\n",c);
    c = a | b;
    printf("Bitwise OR: %d\n",c);
    c = a ^ b;
    printf("Bitwise XOR: %d\n",c);
    c = a << b;
    printf("Shift left: %d\n",c);
    c = a >> b;
    printf("Shift Right: %d\n",c);
    c = (a = 5, b = 10, a + b);
    printf("Value after comma operation: %d\n",c);
    size_t d;
    d = sizeof(a);
    printf("Size of a: %zu\n", d);
    return 0;
}