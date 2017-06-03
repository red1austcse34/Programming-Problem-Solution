#include <stdio.h>
#include <math.h>

int main()
{
    long long int t, i, n, l;

    scanf("%lld", &t);

    for(i=0; i<t; i++)
    {
        scanf("%lld", &n);
        l=(sqrt(1+8*n)-1)/2;
        printf("%lld\n", l);
    }
    return 0;
}
