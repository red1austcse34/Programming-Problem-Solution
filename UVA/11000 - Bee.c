#include <stdio.h>

long long int fib(int);
long long int fib(int x)
{
    long long int i, y=0, sum, z=1;

    for(i=0, sum=0; i<x+1; i++)
    {
        sum=z+y;
        z=y;
        y=sum;
    }
    return sum-1;
}

int main()
{
    int x;

    while(scanf("%d", &x))
    {
        if(x<0)break;
        printf("%lld %lld\n", fib(x+1), fib(x+2));
    }
    return 0;
}
