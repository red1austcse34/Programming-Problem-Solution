#include <stdio.h>
#include <string.h>

char str[1000];

int main()
{
    long long int n, i, y, l, h, j, sum;

    while(scanf("%lld", &n))
    {
        if(n==0)break;
        j=0; sum=0;
        while(n)
        {
            y=n%2;
            sum=sum+y;
            str[j]=y+48;
            n=n/2;
            j++;
        }
        l=strlen(str);
        for(j=0; j<l/2; j++)
        {
            h=str[j]; str[j]=str[l-1-j]; str[l-1-j]=h;
        }
        printf("The parity of %s is %lld (mod 2).\n", str, sum);
        memset(str, '\0', sizeof(str));
    }
    return 0;
}
