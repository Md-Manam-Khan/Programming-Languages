#include <stdio.h>
int main()
{
    float f, c;
    printf("Input temperature in Fahrenheit: ");
    scanf("%f", &f);
    c = (f - 32) * 5 / 9;
    printf("Temperature in Celsius = %.2f", c);
    return 0;
}
