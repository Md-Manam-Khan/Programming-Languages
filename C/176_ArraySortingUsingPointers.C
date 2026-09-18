#include <stdio.h>
void sortUsingPointers(int *a, int n);
int main()
{
    int n, i;
    printf("Input the size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("Input the elements of array: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", (a + i));
    }
    sortUsingPointers(a, n);
    printf("Sorted array: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", *(a + i));
    }
    return 0;
}
void sortUsingPointers(int *a, int n)
{
    int i, j, temp;
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - 1 - i; j++)
        {
            if(*(a + j) > *(a + j + 1))
            {
                temp = *(a + j);
                *(a + j) = *(a + j + 1);
                *(a + j + 1) = temp;
            }
        }
    }
}
