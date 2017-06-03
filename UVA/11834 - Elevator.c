#include <stdio.h>
#include <math.h>
#define EPS 1e-6

int main()
{
    double l, c, r1, r2, x, y, t;

    while(scanf("%lf%lf%lf%lf", &l, &c, &r1, &r2))
    {
        if(l==0 && c==0 && r1==0 && r2==0)break;

        x=l-r2; y=c-r2;
        t= sqrt((r1-x)*(r1-x)+(r1-y)*(r1-y));
        if(r1+r2<=t+EPS && 2*r1<=l && 2*r1<=c && 2*r2<=l && 2*r2<=c){printf("S\n");}
        else{printf("N\n");}
    }
    return 0;
}
