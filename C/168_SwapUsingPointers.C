#include <stdio.h>
void swap(int *a, int *b);
int main()
{
    int a, b;
    printf("Input two values: ");
    scanf("%d %d", &a, &b);
    swap(&a, &b);
    printf("After swap: a = %d, b = %d", a, b);
    return 0;
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
