#include<stdio.h>
int main ()
{
    float a, b, c;
    char d;
    printf("Input the first value: ");
    scanf("%f",&a);
    printf("Input an operator: ");
    scanf(" %c",&d);
    printf("Input the second value: ");
    scanf("%f",&b);
    switch(d)
    {
        case '+':
        {
            c = a + b;
            printf("Addition: %.2f + %.2f = %.2f", a, b, c);
            break;
        }
        case '-':
        {
            c = a - b;
            printf("Subtraction: %.2f - %.2f = %.2f", a, b, c);
            break;
        }
        case '*':
        {
            c = a * b;
            printf("Multiplication: %.2f * %.2f = %.2f", a, b, c);
            break;
        }
        case '/':
        {
            if (b == 0)
            {
                printf("Undefined");
                break;
            }
            else
            {
                c = a / b;
                printf("Division: %.2f / %.2f = %.2f", a, b, c);
                break;
            }
        }
        default:
        {
            printf("Invalid operator");
        }
    }
    return 0;
}