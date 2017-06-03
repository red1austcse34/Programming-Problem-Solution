#include <stdio.h>
long long happy(long long n)
{
    long long s=0;
    if(n<=9)
        return n;
    while(n!=0)
    {

        s+=((n%10)*(n%10));
        n/=10;
    }
    happy(s);
}



int main()
{
    int t,i;
    long long n;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%lld",&n);
        if(n==7)
        {
            printf("Case #%d: %lld is a Happy number.\n",i+1,n);
        }
        else if(happy(n)==1)
        {
            printf("Case #%d: %lld is a Happy number.\n",i+1,n);
        }
        else
        {
             printf("Case #%d: %lld is an Unhappy number.\n",i+1,n);
        }

    }
    return 0;
}
