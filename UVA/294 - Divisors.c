#include <stdio.h>
#include <math.h>

long int div(long int);
long int div(long int x)
{
    long int i, d, r;
    r=sqrt(x);
    for(i=1, d=0; i<=r; i++)
    {
        if(x%i==0){d=d+2;}
    }
    if(r*r==x){d--;}
    return d;
}

int main()
{
    long int t, x, y, i, j, h, r, d, n;

    scanf("%ld", &t);
    for(i=0; i<t; i++)
    {
        scanf("%ld%ld", &x, &y);
        if(x>y){h=x; x=y; y=h;}
        for(j=x, r=0; j<=y; j++)
        {
            d=div(j);
            if(d>r){r=d; n=j;}
        }
        printf("Between %ld and %ld, %ld has a maximum of %ld divisors.\n", x, y, n, r);
    }
    return 0;
}
