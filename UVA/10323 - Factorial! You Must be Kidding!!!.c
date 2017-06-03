#include <stdio.h>

int main()
{
    long long int n, i=0, fact;

    while(scanf("%lld", &n)!=EOF)
    {
        if(n>13){printf("Overflow!\n"); continue;}
        if(n<8 && n>=0){printf("Underflow!\n"); continue;}
        if(n<0)
        {
            if(n%2==0){printf("Underflow!\n"); continue;}
            else{printf("Overflow!\n"); continue;}
        }
        for(i=2, fact=1; i<=n; i++)
        {
            fact=fact*i;
        }
        printf("%lld\n", fact);
    }
    return 0;
}
