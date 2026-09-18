#include <stdio.h>
int main()
{
    int a;
    int *p;
    printf("Input a value: ");
    scanf("%d", &a);
    p = &a;
    printf("Address of a: %p\n", (void*)&a);
    printf("Dereferenced value: %d\n", *p);
    *p = *p + 10;
    printf("New value of a: %d", a);
    return 0;
}
