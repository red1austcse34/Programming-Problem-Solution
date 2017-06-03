#include <stdio.h>

int main()
{
    long long int x, i, j;
    char str[1000];

    while(scanf("%lld", &x))
    {
        if(x<0){break;}
        if(x==0){printf("0\n"); continue;}
        i=0;
        while(x>0)
        {
            str[i]=(x%3)+48;
            x=x/3;
            i++;
        }
        str[i]='\0';

        for(j=i-1; j>=0; j--)
        {
            printf("%c", str[j]);
        }
        printf("\n");
    }
    return 0;
}
