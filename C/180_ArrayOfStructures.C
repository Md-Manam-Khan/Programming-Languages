#include <stdio.h>
struct Student
{
    char name[50];
    int roll;
    float marks;
};
int main()
{
    int n, i;
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
    printf("\nStudent list:\n");
    for(i = 0; i < n; i++)
    {
        printf("%s %d %.2f\n", manam[i].name, manam[i].roll, manam[i].marks);
    }
    return 0;
}
