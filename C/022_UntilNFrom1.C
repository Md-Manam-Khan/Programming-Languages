#include <stdio.h>
int main()
{
    int n;
    printf("This Program prints until n from 1!");
    printf("\nInput n: ");
    scanf("%d",&n);
    int i = 1;
    do
    {
        if (i == n)
        {
            break;
        }
        else
        {
            printf("%d\n", i);
            i++;
        }
    }
    while (1);
    return 0;
}