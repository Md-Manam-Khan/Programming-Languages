#include <stdio.h>
struct Student
{
    char name[50];
    float marks;
};
void printStudent(struct Student s);
int main()
{
    struct Student manam;
    printf("Input name: ");
    scanf("%s", manam.name);
    printf("Input marks: ");
    scanf("%f", &manam.marks);
    printStudent(manam);
    return 0;
}
void printStudent(struct Student s)
{
    printf("Name: %s\nMarks: %.2f", s.name, s.marks);
}
