#include <stdio.h>
int main()
{
    int n;
    printf("This Program prints odd numbers in between 1 to n!");
    printf("\nInput n: ");
    scanf("%d",&n);
    int i = 1;
    do
    {
        if ((i % 2) == 1)
        {
            printf("%d\n", i);
        }
        i += 2;
    }
    while (i <= n);
    return 0;
}