#include <stdio.h>
int main ()
{
    int a, b, c;
    printf("Input the first value (a): ");
    scanf("%d", &a);
    printf("Input the second value (b): ");
    scanf("%d", &b);
    printf("Input the third value (c): ");
    scanf("%d", &c);
    if ((a == b) && (b == c))
    {
        printf("No one is the greatest value, all are equal");
    }
    else if ((a == b) || (b == c) || (c == a))
    {
        if (a == b)
        {
            if (a > c)
            {
                printf("Both a and b are equal and greater than c");
            }
            else
            {
                printf("Both a and b are equal and c is greater than both");
            }
        }
        else if (b == c)
        {
            if (b > a)
            {
                printf("Both b and c are equal and greater than a");
            }
            else
            {
                printf("Both b and c are equal and a is greater than both");
            }
        }
        else
        {
            if (c > b)
            {
                printf("Both a and c are equal and greater than b");
            }
            else
            {
                printf("Both a and c are equal and b is greater than both");
            }
        }
    }
    else
    {
        if (a > b)
        {
            if (a > c)
            {
                printf("a is the greatest");
            }
            else
            {
                printf("c is the greatest");
            }
        }
        else
        {
            if (b > c)
            {
                printf("b is the greatest");
            }
            else
            {
                printf("c is the greatest");
            }
        }
    }
    return 0;
}