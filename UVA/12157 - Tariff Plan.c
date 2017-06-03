#include <stdio.h>

int main()
{
    int i, j, t, c, a, x, y, sum1, sum2;
    scanf("%d", &t);

    for(i=0; i<t; i++)
    {
        scanf("%d", &c);
        for(sum1=0, sum2=0, j=0; j<c; j++)
        {

            scanf("%d", &a);
            x=((a+30)/30)*10;
            y=((a+60)/60)*15;
            sum1=sum1+x;
            sum2=sum2+y;
        }
        if(sum2>sum1){printf("Case %d: Mile %d\n", i+1, sum1);}
        else if(sum1>sum2){printf("Case %d: Juice %d\n", i+1, sum2);}
        else if(sum1=sum2){printf("Case %d: Mile Juice %d\n", i+1, sum2);}
    }
    return 0;
}
