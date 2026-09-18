#include <stdio.h>
void printNTo1(int n);
int main()
{
    int n;
    printf("Input a value: ");
    scanf("%d", &n);
    printNTo1(n);
    return 0;
}
void printNTo1(int n)
{
    if(n == 0)
    {
        return;
    }
    printf("%d ", n);
    printNTo1(n - 1);
}
