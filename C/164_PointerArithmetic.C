#include <stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int *p;
    int i;
    p = a;
    for(i = 0; i < 5; i++)
    {
        printf("Value: %d, Address: %p\n", *(p + i), (void*)(p + i));
    }
    return 0;
}
