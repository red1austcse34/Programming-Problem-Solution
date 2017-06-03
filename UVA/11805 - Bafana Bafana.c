#include <stdio.h>

int main()
{
    int t, n, k, p, i, j, r;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d%d%d", &n, &k, &p);
        for(j=0, r=k; j<p; j++)
        {
          if(r==n){r=1;}
          else{r=r+1;}
        }
        printf("Case %d: %d\n", i+1, r);
    }
    return 0;
}
