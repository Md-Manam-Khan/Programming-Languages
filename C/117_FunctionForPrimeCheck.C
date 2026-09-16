#include <stdio.h>
int isPrime(int n);
int main()
{
    int n, prime;
    printf("Input a number: ");
    scanf("%d", &n);
    prime = isPrime(n);
    if(prime == 1)
    {
        printf("Prime number");
    }
    else
    {
        printf("Not a prime number");
    }
    return 0;
}
int isPrime(int n)
{
    int i;
    if(n < 2)
    {
        return 0;
    }
    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}