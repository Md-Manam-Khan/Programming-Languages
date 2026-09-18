#include <stdio.h>
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);
int main()
{
    int choice;
    float a, b, result;
    manam:
    printf("Menu:\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n");
    printf("I choose: ");
    scanf("%d", &choice);
    if(choice == 5)
    {
        printf("Bye");
        return 0;
    }
    printf("Input two numbers: ");
    scanf("%f %f", &a, &b);
    switch(choice)
    {
        case 1:
        {
            result = add(a, b);
            printf("Result: %.2f\n", result);
            break;
        }
        case 2:
        {
            result = subtract(a, b);
            printf("Result: %.2f\n", result);
            break;
        }
        case 3:
        {
            result = multiply(a, b);
            printf("Result: %.2f\n", result);
            break;
        }
        case 4:
        {
            if(b == 0)
            {
                printf("Undefined\n");
                break;
            }
            result = divide(a, b);
            printf("Result: %.2f\n", result);
            break;
        }
        default:
        {
            printf("Invalid choice\n");
        }
    }
    goto manam;
}
float add(float a, float b)
{
    return a + b;
}
float subtract(float a, float b)
{
    return a - b;
}
float multiply(float a, float b)
{
    return a * b;
}
float divide(float a, float b)
{
    return a / b;
}
