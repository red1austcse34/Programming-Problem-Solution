#include <stdio.h>

int main()
{
    int t, n, k, x, i, j, a, r;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d%d%d", &n, &k, &x);
        for(j=1, r=0; j<=n; j++)
        {
            r=r+j;
        }
        for(j=x,a=0; a<k; a++)
        {
            r=r-j;
            j++;
        }
        printf("Case %d: %d\n", i+1, r);
    }
    return 0;
}
