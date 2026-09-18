#include <stdio.h>
int main()
{
    int n, digit, i, freq[10] = {0};
    printf("Input a number: ");
    scanf("%d", &n);
    while(n != 0)
    {
        digit = n % 10;
        freq[digit]++;
        n = n / 10;
    }
    for(i = 0; i < 10; i++)
    {
        if(freq[i] > 0)
        {
            printf("Digit %d: %d times\n", i, freq[i]);
        }
    }
    return 0;
}