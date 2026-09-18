#include <stdio.h>
struct Student
{
    char name[50];
    int roll;
    float marks;
};
int main()
{
    int n, i, j;
    struct Student temp;
    printf("Input the number of students: ");
    scanf("%d", &n);
    struct Student manam[n];
    for(i = 0; i < n; i++)
    {
        printf("\nInput name: ");
        scanf("%s", manam[i].name);
        printf("Input marks: ");
        scanf("%f", &manam[i].marks);
    }
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - 1 - i; j++)
        {
            if(manam[j].marks < manam[j + 1].marks)
            {
                temp = manam[j];
                manam[j] = manam[j + 1];
                manam[j + 1] = temp;
            }
        }
    }
    printf("\nSorted by marks (highest first):\n");
    for(i = 0; i < n; i++)
    {
        printf("%s %.2f\n", manam[i].name, manam[i].marks);
    }
    return 0;
}
