#include <stdio.h>

int main()
{
    int t, i, r;
    long long int n, x;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%lld", &n);
        x=(((((n*567)/9)+7492)*235)/47)-498;
        r=(x%100)/10;
        if(r<0){r=-1*r;}
        printf("%d\n", r);
    }
    return 0;
}
