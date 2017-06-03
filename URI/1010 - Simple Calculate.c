#include <stdio.h>

int main()
{
    float a, b, c, d, e, f, res;

    scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);
    res=(b*c)+(e*f);
    printf("VALOR A PAGAR: R$ %.2f\n", res);
    return 0;
}
