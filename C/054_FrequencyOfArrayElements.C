#include <stdio.h>
int main()
{
    int n, i, j, count;
    printf("Input the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Input the elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Frequency of elements:\n");
    for(i = 0; i < n; i++)
    {
        count = 1;
        if(a[i] == -1)
        {
            continue;
        }
        for(j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                count++;
                a[j] = -1;
            }
        }
        printf("%d: %d times\n", a[i], count);
    }
    return 0;
}