#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char str[10];
    double sum, x, n;
    int t, i, l, j, m;

    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%s", str);
        x=atoi(str);
        l=strlen(str);
        for(j=0, sum=0; j<l; j++)
        {
            m=str[j]-48;
            n=pow( m, l);
            sum=sum+n;
        }
        if(sum==x){printf("Armstrong\n");}
        else{printf("Not Armstrong\n");}
    }
    return 0;
}
