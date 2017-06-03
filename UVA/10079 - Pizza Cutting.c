#include<stdio.h>

int main()
{
    long long int n, p, i;

    while(scanf("%lld", &n))
    {
        if(n<0)break;
        for(i=1, p=1; i<=n; i++)
        {
            p=p+i;
        }
        printf("%lld\n", p);
    }
    return 0;
}
