#include <stdio.h>
void doubleValue(int *a);
int main()
{
    int a;
    printf("Input a value: ");
    scanf("%d", &a);
    doubleValue(&a);
    printf("Doubled value: %d", a);
    return 0;
}
void doubleValue(int *a)
{
    *a = *a * 2;
}
