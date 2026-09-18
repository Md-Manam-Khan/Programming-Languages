#include <stdio.h>
struct Date
{
    int day, month, year;
};
struct Student
{
    char name[50];
    struct Date dob;
};
int main()
{
    struct Student manam;
    printf("Input name: ");
    scanf("%s", manam.name);
    printf("Input date of birth (day month year): ");
    scanf("%d %d %d", &manam.dob.day, &manam.dob.month, &manam.dob.year);
    printf("%s was born on %d/%d/%d", manam.name, manam.dob.day, manam.dob.month, manam.dob.year);
    return 0;
}
