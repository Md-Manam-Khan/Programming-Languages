#include <stdio.h>
struct Student
{
    char name[50];
    int roll;
    float marks;
};
int main()
{
    FILE *fp;
    struct Student manam;
    char choice;
    fp = fopen("students.txt", "a");
    if(fp == NULL)
    {
        printf("Could not open file");
        return 0;
    }
    do
    {
        printf("Input name: ");
        scanf("%s", manam.name);
        printf("Input roll: ");
        scanf("%d", &manam.roll);
        printf("Input marks: ");
        scanf("%f", &manam.marks);
        fprintf(fp, "%s %d %.2f\n", manam.name, manam.roll, manam.marks);
        printf("Add another? (y/n): ");
        scanf(" %c", &choice);
    } while(choice == 'y' || choice == 'Y');
    fclose(fp);
    printf("Records saved successfully");
    return 0;
}
