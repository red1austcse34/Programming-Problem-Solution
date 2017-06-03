#include <stdio.h>

int main()
{
    int t, i, j, n;
    double a0, aN, c, sum;

    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        if(i>1){printf("\n");}
        scanf("%d%lf%lf",&n,&a0,&aN);
        for(j=0, sum=0; j<n; j++)
        {
            scanf("%lf",&c);
            sum+=(n-j)*c;
        }
        printf("%.2lf\n",(n*a0+aN-2*sum)/(n+1));

    }
    return 0;
}
