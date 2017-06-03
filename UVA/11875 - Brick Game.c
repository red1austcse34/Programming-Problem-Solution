#include <stdio.h>

int main()
{
    int t, r, n, k, a[11], h, i, j;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d", &n);
        r=n/2;
        for(j=0; j<n; j++)
        {
            scanf("%d", &a[j]);
        }
        for(j=0; j<n; j++)
        {
            for(k=0; k<n-1-j; k++)
            {
                if(a[k]>a[k+1])
                {
                    h=a[k];
                    a[k]=a[k+1];
                    a[k+1]=h;
                }
            }
        }
        printf("Case %d: %d\n", i+1, a[r]);
    }
    return 0;
}
