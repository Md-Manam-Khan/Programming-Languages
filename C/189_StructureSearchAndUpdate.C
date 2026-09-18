#include <stdio.h>
struct Student
{
    char name[50];
    int roll;
    float marks;
};
int main()
{
    int n, i, roll, found = -1;
    float newMarks;
    printf("Input the number of students: ");
    scanf("%d", &n);
    struct Student manam[n];
    for(i = 0; i < n; i++)
    {
        printf("\nInput name: ");
        scanf("%s", manam[i].name);
        printf("Input roll: ");
        scanf("%d", &manam[i].roll);
        printf("Input marks: ");
        scanf("%f", &manam[i].marks);
    }
    printf("\nInput roll to update: ");
    scanf("%d", &roll);
    for(i = 0; i < n; i++)
    {
        if(manam[i].roll == roll)
        {
            found = i;
            break;
        }
    }
    if(found == -1)
    {
        printf("Student not found");
        return 0;
    }
    printf("Input new marks: ");
    scanf("%f", &newMarks);
    manam[found].marks = newMarks;
    printf("Updated: %s %d %.2f", manam[found].name, manam[found].roll, manam[found].marks);
    return 0;
}
