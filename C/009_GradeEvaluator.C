#include <stdio.h>
int main ()
{
    float a;
    printf("Input the student's mark: ");
    scanf("%f", &a);
    if (a > 100)
    {
        printf("Invalid, cannot exceed 100");
    }
    else if (a < 0)
    {
        printf("Invalid, cannot go lower than 0");
    }
    else if (a >= 80)
    {
        printf("Congratulations, A+");
    }
    else if (a >= 70)
    {
        printf("Congratulations, A");
    }
    else if (a >= 60)
    {
        printf("Very good, A-");
    }
    else if (a >= 50)
    {
        printf("Good, B+");
    }
    else if (a >= 40)
    {
        printf("Try more, B");
    }
    else
    {
        printf("Fail");
    }
    return 0;
}