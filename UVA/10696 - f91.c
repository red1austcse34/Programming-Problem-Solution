#include <stdio.h>

int main()
{
    long long int x, i;

    while(scanf("%lld", &x))
    {
        if(x==0)break;
        else if(x>100){printf("f91(%lld) = %lld\n", x, x-10);}
        else{printf("f91(%lld) = 91\n", x);}
    }
    return 0;
}
