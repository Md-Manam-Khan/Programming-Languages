#include <stdio.h>
int main()
{
    int a = 10;
    int *p;
    p = &a;
    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", (void*)&a);
    printf("Value of p: %p\n", (void*)p);
    printf("Value pointed by p: %d", *p);
    return 0;
}
