#include <stdio.h>
#include <math.h>

int main()
{
    int t, i;
    double a, b, c, r, x, y, z;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%lf %lf %lf %lf", &a, &b, &c, &r);
        x=1+(1/r);
        z=x/(a*a);
        y=sqrt(1/z);
        printf("Case %d: %.8lf\n", i+1, y);
    }
    return 0;
}
