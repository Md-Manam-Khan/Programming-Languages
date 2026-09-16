#include <stdio.h>
int main()
{
    int a, b, i, lcm;
    printf("Input two numbers: ");
    scanf("%d %d", &a, &b);
    for(i = 1; ; i++)
    {
        if(i % a == 0 && i % b == 0)
        {
            lcm = i;
            break;
        }
    }
    printf("LCM: %d", lcm);
    return 0;
}