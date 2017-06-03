#include <stdio.h>

int main()
{
    int t, i, j, n, x, sum;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d", &n);
        for(j=0, sum=0; j<n; j++)
        {
            scanf("%d", &x);
            if(x<0)x=0;
            sum=sum+x;
        }
    printf("Case %d: %d\n", i+1, sum);
    }

    return 0;
}
