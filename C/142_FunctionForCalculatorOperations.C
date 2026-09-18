#include <stdio.h>
float calculatorOperation(float a, float b, char op);
int main()
{
    float a, b, result;
    char op;
    printf("Input the first value: ");
    scanf("%f", &a);
    printf("Input an operator: ");
    scanf(" %c", &op);
    printf("Input the second value: ");
    scanf("%f", &b);
    result = calculatorOperation(a, b, op);
    printf("Result: %.2f", result);
    return 0;
}
float calculatorOperation(float a, float b, char op)
{
    switch(op)
    {
        case '+':
        {
            return a + b;
        }
        case '-':
        {
            return a - b;
        }
        case '*':
        {
            return a * b;
        }
        case '/':
        {
            if(b == 0)
            {
                printf("Undefined\n");
                return 0;
            }
            return a / b;
        }
        default:
        {
            printf("Invalid operator\n");
            return 0;
        }
    }
}
