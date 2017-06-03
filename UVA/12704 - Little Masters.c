#include <stdio.h>
#include <math.h>

int main()
{
    int t, x, y, r, i;
    float d, a, r1, r2;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d%d%d", &x, &y, &r);
        a=(x*x)+(y*y);
        d=sqrt(a);
        r1=r-d;
        r2=r+d;
        printf("%.2f %.2f\n", r1, r2);
    }
    return 0;
}
