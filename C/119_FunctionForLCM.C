#include <stdio.h>
int lcm(int a, int b);
int main()
{
    int a, b, result;
    printf("Input two numbers: ");
    scanf("%d %d", &a, &b);
    result = lcm(a, b);
    printf("LCM: %d", result);
    return 0;
}
int lcm(int a, int b)
{
    int i, lcm;
    if(a > b)
    {
        lcm = a;
    }
    else
    {
        lcm = b;
    }
    while(1)
    {
        if(lcm % a == 0 && lcm % b == 0)
        {
            return lcm;
        }
        lcm++;
    }
}