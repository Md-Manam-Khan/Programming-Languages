#include <stdio.h>
int main()
{
    float u, v, t, a;
    printf("Input initial velocity u: ");
    scanf("%f", &u);
    printf("Input final velocity v: ");
    scanf("%f", &v);
    printf("Input time t: ");
    scanf("%f", &t);
    a = (v - u) / t;
    printf("Acceleration a = %.2f", a);
    return 0;
}
