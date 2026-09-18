#include <stdio.h>
#include <string.h>
struct Student
{
    char name[50];
    int roll;
    float marks;
};
int main()
{
    int n, i, roll, found = -1;
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
    printf("\nInput the roll to find: ");
    scanf("%d", &roll);
    for(i = 0; i < n; i++)
    {
        if(manam[i].roll == roll)
        {
            found = i;
            break;
        }
    }
    if(found != -1)
    {
        printf("Found: %s %d %.2f", manam[found].name, manam[found].roll, manam[found].marks);
    }
    else
    {
        printf("Student not found");
    }
    return 0;
}
