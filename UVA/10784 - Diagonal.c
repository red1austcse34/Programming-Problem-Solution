#include <stdio.h>
#include <math.h>

int main()
{
    int i=1;
    double n,p;

    while(scanf("%lf", &n))
    {
        if(n==0)break;
        p = ceil((3+sqrt(9+8*n))/2);
        printf("Case %d: %.0lf\n",i,p);
        i++;
    }
    return 0;
}
