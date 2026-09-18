#include <stdio.h>
struct Student
{
    char name[50];
    int roll;
    float marks;
};
int main()
{
    struct Student manam;
    manam.roll = 1;
    manam.marks = 95.5;
    printf("Roll: %d\n", manam.roll);
    printf("Marks: %.2f", manam.marks);
    return 0;
}
