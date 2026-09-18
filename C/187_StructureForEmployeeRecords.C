#include <stdio.h>
struct Employee
{
    char name[50];
    int id;
    float salary;
};
int main()
{
    int n, i;
    printf("Input the number of employees: ");
    scanf("%d", &n);
    struct Employee khan[n];
    for(i = 0; i < n; i++)
    {
        printf("\nInput name: ");
        scanf("%s", khan[i].name);
        printf("Input id: ");
        scanf("%d", &khan[i].id);
        printf("Input salary: ");
        scanf("%f", &khan[i].salary);
    }
    printf("\nEmployee records:\n");
    for(i = 0; i < n; i++)
    {
        printf("%s %d %.2f\n", khan[i].name, khan[i].id, khan[i].salary);
    }
    return 0;
}
