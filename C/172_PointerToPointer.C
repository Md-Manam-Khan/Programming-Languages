#include <stdio.h>
int main()
{
    int a = 25;
    int *p;
    int **pp;
    p = &a;
    pp = &p;
    printf("Value of a: %d\n", a);
    printf("Value using p: %d\n", *p);
    printf("Value using pp: %d", **pp);
    return 0;
}
