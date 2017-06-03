#include <stdio.h>
#include <math.h>

int main()
{
    long long int n, t, i, r;
    double k, m;

    scanf("%lld", &t);
    for(i=0; i<t; i++)
    {
        scanf("%lf", &k);

        if(k<=180000.0){r=0;}
        else if(k>180000.0&&k<=480000.0){r=ceil((k-180000)*0.1);}
        else if(k>480000.0&&k<=880000.0){r=ceil(((k-480000)*0.15)+30000.0);}
        else if(k>880000.0&&k<=1180000.0){r=ceil(((k-880000)*0.2)+90000);}
        else if(k>1180000){r=ceil(((k-1180000)*0.25)+150000);}
        if(r>0.0&&r<2000.0){r=2000;}
        printf("Case %lld: %lld\n", i+1, r);
    }
    return 0;
}
