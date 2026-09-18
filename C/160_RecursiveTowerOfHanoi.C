#include <stdio.h>
void towerOfHanoi(int n, char from, char to, char aux);
int main()
{
    int n;
    printf("Input the number of disks: ");
    scanf("%d", &n);
    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}
void towerOfHanoi(int n, char from, char to, char aux)
{
    if(n == 0)
    {
        return;
    }
    towerOfHanoi(n - 1, from, aux, to);
    printf("Move disk %d from %c to %c\n", n, from, to);
    towerOfHanoi(n - 1, aux, to, from);
}
