#include <stdio.h>
int main()
{
    int n;
    printf("This Program prints even numbers in between 1 to n!");
    printf("\nInput n: ");
    scanf("%d",&n);
    int i = 2;
    while (i <= n)
    {
        if ((i % 2) == 0)
        {
            printf("%d\n", i);
        }
        i += 2;
    }
    return 0;
}