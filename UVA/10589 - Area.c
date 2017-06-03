#include <stdio.h>
#include <math.h>
double  l[1000001], b[1000001];

int main()
{
    double n, a, m, res;
    int i;

    while(scanf("%lf%lf", &n, &a))
    {
        if(n==0 && a==0)break;
        for(i=0, m=0; i<n; i++)
        {
            scanf("%lf%lf", &l[i], &b[i]);
            if(sqrt(pow(l[i],2)+pow(b[i],2))<=a && sqrt(pow(l[i],2)+pow(a-b[i],2))<=a && sqrt(pow(a-l[i],2)+pow(a-b[i],2))<=a && sqrt(pow(a-l[i],2)+pow(b[i],2))<=a){m++;}
        }
        a=pow(a,2);
        res=m*a/n;
        printf("%.5lf\n", res);
    }
    return 0;
}
