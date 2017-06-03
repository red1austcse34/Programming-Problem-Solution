#include <stdio.h>
#include <math.h>

int main()
{
    int t, i;
    double a1, a2, pi, b, r, l, x;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%lf", &l);
        r=l/5;
        a1=2*acos(0.0)*r*r;
        x=6.0/10;
        b=l*x;
        a2=b*l-a1;
        printf("%.2lf %.2lf\n", a1, a2);
    }
    return 0;
}
