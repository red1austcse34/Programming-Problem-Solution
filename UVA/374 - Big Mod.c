#include <stdio.h>

long int bigmod(long int, long int, long int);
long int bigmod(long int b, long int p, long int m)
{
    if(p==0){return 1;}
    if(p%2==0){return bigmod(b, p/2, m)*bigmod(b, p/2, m)%m;}
    return bigmod(b, p-1, m)*(b%m)%m;
}

int main()
{
    long int b, p, m, prod;

    while(scanf("%ld%ld%ld", &b, &p, &m)!=EOF)
    {
        prod=b*p;
        printf("%ld\n", bigmod(b, p, m));
    }
    return 0;
}
