#include <stdio.h>

int main()
{
    int t1, t2, i, j, k;
    long long int x, sum=0;
    char str[6];
    scanf("%d", &t1);
    for(i=0; i<t1; i++)
    {
        scanf("%d", &t2);
        for(j=0, k=0, sum=0; j<t2; j++)
        {
            scanf("%s", str);
            if(str[0]=='r')
            {
                k++;
                if(k==1){printf("Case %d:\n", i+1);}
                printf("%lld\n", sum);
            }
            else if(str[0]=='d')
            {
                scanf("%lld", &x);
                sum=sum+x;
            }

        }

    }
    return 0;
}
