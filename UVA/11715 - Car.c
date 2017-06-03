#include <stdio.h>
#include <math.h>

int main()
{
    int c, i, n, x;
    float u, v, a, s, t;
    for(i=1; 1; i++)
    {
        scanf("%d", &n);
        if(n==0)break;
        else if(n==1)
        {
            scanf("%f%f%f", &u, &v, &t);
            a=(v-u)/t;
            s=(u*t)+(a*t*t/2);
            printf("Case %d: %.3f %.3f\n", i, s, a);
        }
        else if(n==2)
        {
            scanf("%f%f%f", &u, &v, &a);
            t=(v-u)/a;
            s=(u*t)+(a*t*t/2);
            printf("Case %d: %.3f %.3f\n", i, s, t);
        }
        else if(n==3)
        {
            scanf("%f%f%f", &u, &a, &s);
            x=(u*u)+(2*a*s);
            v=sqrt(x);
            t=(v-u)/a;
            printf("Case %d: %.3f %.3f\n", i, v, t);
        }
        else if(n==4)
        {
            scanf("%f%f%f", &v, &a, &s);
            x=(v*v)-(2*a*s);
            u=sqrt(x);
            t=(v-u)/a;
            printf("Case %d: %.3f %.3f\n", i, u, t);
        }
    }
    return 0;
}
