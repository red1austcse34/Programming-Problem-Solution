#include<stdio.h>

int main()
{
    int t, n, q, p, w[30], i, j ,sum;

    scanf("%d", &t);

    for(i=0; i<t; i++)
    {
        scanf("%d%d%d", &n, &p, &q);

        for(j=0; j<n; j++)
        {
            scanf("%d", &w[j]);
        }

        for(j=0, sum=0; j<p; j++)
        {
            if(j==n){break;}
            sum=sum+w[j];
            if(sum>q){break;}
        }

        printf("Case %d: %d\n", i+1, j);
    }
    return 0;
}

