#include <stdio.h>
int main()
{
    float a;
    int b;
    printf("Input the mark: ");
    scanf("%f", &a);
    if (a < 0 || a > 100)
    {
        printf("Invalid mark.");

        if (a > 100)
        {
            printf(" Marks cannot be more than 100");
        }
        else
        {
            printf(" Marks cannot be less than 0");
        }
    }
    else
    {
        b = a / 10;
        switch(b)
        {
            case 10:
            case 9:
            case 8:
            {
                printf("Excellent. A+");
                break;
            }
            case 7:
            {
                printf("Very good. A");
                break;
            }
            case 6:
            {
                printf("Good. A-");
                break;
            }
            case 5:
            {
                printf("Okay. B+");
                break;
            }
            case 4:
            {
                printf("Not good. B");
                break;
            }
            case 3:
            case 2:
            case 1:
            case 0:
            {
                printf("Fail");
                break;
            }
        }
    }
    return 0;
}