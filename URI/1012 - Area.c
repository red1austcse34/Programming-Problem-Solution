#include <stdio.h>

int main()
{
    double a, b, c, at, ac, atr, aq, ar;

    scanf("%lf %lf %lf", &a, &b, &c);
    at=.5*a*c;
    ac=3.14159*c*c;
    atr=(a+b)*c*.5;
    aq=b*b;
    ar=a*b;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", at, ac, atr, aq, ar);
    return 0;
}
