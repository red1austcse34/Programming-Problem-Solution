#include <stdio.h>

int main()
{
    double a, res;

    scanf("%lf", &a);
    res=(4/3.0)*3.14159*a*a*a;
    printf("VOLUME = %.3lf\n", res);
    return 0;
}
