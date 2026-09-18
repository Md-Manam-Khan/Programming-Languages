#include <stdio.h>
int main()
{
    int a, b;
    int *p1, *p2;
    printf("Input two values: ");
    scanf("%d %d", &a, &b);
    p1 = &a;
    p2 = &b;
    printf("Sum using pointers: %d\n", *p1 + *p2);
    printf("Product using pointers: %d", *p1 * *p2);
    return 0;
}
