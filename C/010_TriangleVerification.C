#include <stdio.h>
int main ()
{
    int a1, b1, c1, a2, b2, c2;
    printf("Input the value of the first side (integer): ");
    scanf("%d", &a1);
    printf("Input the value of the second side (integer): ");
    scanf("%d", &b1);
    printf("Input the value of the third side (integer): ");
    scanf("%d", &c1);
    printf("Input the value of the first angle (integer): ");
    scanf("%d", &a2);
    printf("Input the value of the second angle (integer): ");
    scanf("%d", &b2);
    printf("Input the value of the third angle (integer): ");
    scanf("%d", &c2);
    if ((a1 <= 0) || (b1 <= 0) || (c1 <= 0))
    {
        printf("Invalid, a triangle cannot have a side less than or equal to 0");
    }
    else if ((a2 <= 0) || (b2 <= 0) || (c2 <= 0))
    {
        printf("Invalid, a triangle cannot have an angle less than or equal to 0");
    }
    else if (((a1 + b1) <= c1) || ((a1 + c1) <= b1) || ((c1 + b1) <= a1))
    {
        printf("Invalid, the sum of any two sides of a triangle must be greater than the third side");
    }
    else if ((a2 + b2 + c2) != 180)
    {
        printf("Invalid, the sum of three angles of a triangle cannot be anything but 180 degrees");
    }
    else if (((a1 == b1) && (b1 == c1)) && ((a2 != 60) || (b2 != 60) || (c2 != 60)))
    {
        printf("Invalid, an equilateral triangle should have three angles of 60 degrees");
    }
    else if (((a2 == 60) && (b2 == 60) && (c2 == 60)) && ((a1 != b1) || (b1 != c1) || (a1 != c1)))
    {
        printf("Invalid, a triangle with three 60 degrees angles must have equal sides");
    }
    else
    {
        printf("The triangle is valid");
    }
    return 0;
}