#include <stdio.h>
long long int fib(long long int);
long long int fib(long long int x)
{
    long long int i, y=0, sum, z=1;
    for(i=0, sum=0; i<x+1; i++)
    {
        sum=z+y;
        z=y;
        y=sum;
    }
    return sum;
}

int main()
{
    long long int x;
    while(scanf("%lld", &x))
    {
        if(x==0)break;
        printf("%lld\n", fib(x));
    }
    return 0;
}
