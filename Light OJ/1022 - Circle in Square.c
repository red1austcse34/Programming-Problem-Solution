#include <stdio.h>
#include <math.h>

int main()
{
    int t, i;
    double r, s, c, pi, result;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
     scanf("%lf", &r);
     s= 4*r*r;
     pi= 2*acos(0.0);
     c= pi*r*r;
     result=s-c;
     printf("Case %d: %.2lf\n",i+1, result);
    }
return 0;
}
