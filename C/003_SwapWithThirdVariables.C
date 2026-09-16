#include <stdio.h>
int main ()
{
    int a, b, c;
    printf("Input the value of a: ");
    scanf("%d", &a);
    printf("Input the value of b: ");
    scanf("%d", &b);
    c = a;
    a = b;
    b = c;
    printf("Value of a: %d\n", a);
    printf("Value of b: %d", b);
    return 0;
}
