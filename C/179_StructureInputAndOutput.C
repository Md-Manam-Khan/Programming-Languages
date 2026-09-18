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
    printf("Input name: ");
    scanf("%s", manam.name);
    printf("Input roll: ");
    scanf("%d", &manam.roll);
    printf("Input marks: ");
    scanf("%f", &manam.marks);
    printf("\nName: %s\nRoll: %d\nMarks: %.2f", manam.name, manam.roll, manam.marks);
    return 0;
}
