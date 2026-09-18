#include <stdio.h>
struct Student
{
    char name[50];
    int roll;
    float marks;
};
int main()
{
    FILE *fp, *temp;
    struct Student manam;
    int roll, found = 0;
    float newMarks;
    fp = fopen("students.txt", "r");
    if(fp == NULL)
    {
        printf("Could not open file");
        return 0;
    }
    temp = fopen("temp.txt", "w");
    printf("Input roll to update: ");
    scanf("%d", &roll);
    printf("Input new marks: ");
    scanf("%f", &newMarks);
    while(fscanf(fp, "%s %d %f", manam.name, &manam.roll, &manam.marks) != EOF)
    {
        if(manam.roll == roll)
        {
            manam.marks = newMarks;
            found = 1;
        }
        fprintf(temp, "%s %d %.2f\n", manam.name, manam.roll, manam.marks);
    }
    fclose(fp);
    fclose(temp);
    remove("students.txt");
    rename("temp.txt", "students.txt");
    if(found)
    {
        printf("Record updated successfully");
    }
    else
    {
        printf("Roll not found");
    }
    return 0;
}
