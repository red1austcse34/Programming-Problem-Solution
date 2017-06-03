#include <stdio.h>
long int s(long int);
long int s(long int x)
{
    long int sum=0;
    while(x)
    {
        sum=sum+(x%10);
        x=x/10;
    }
    if(sum>9)return s(sum);
    else return sum;
}

int main()
{
    long int x;

    while(scanf("%ld", &x))
    {
        if(x==0)break;
        printf("%ld\n", s(x));
    }
    return 0;
}
