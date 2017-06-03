#include <stdio.h>

int main()
{
    long int a, b, c, d, l, i, j;

    while(scanf("%ld%ld%ld%ld%ld", &a, &b, &c, &d, &l))
    {
        if(a==0 && b==0 && c==0 && d==0 && l==0)break;
        for(i=0, j=0; i<=l; i++)
        {
            if(((a*i*i)+(b*i)+c)%d==0){j++;}
        }
        printf("%ld\n", j);
    }
    return 0;
}
