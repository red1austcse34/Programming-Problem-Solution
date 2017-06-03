#include <stdio.h>

int main()
{
    int n, m, i, j, s, r=0, a[100][100];

    while(scanf("%d%d", &n, &m)!=EOF)
    {
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        for(i=0; i<n; i++)
        {
            for(j=0, s=1; j<m; j++)
            {
                if(a[i][j]==0){s=0; break;}
            }
            if(s==1){r=r+1;}
        }
        printf("%d\n", r);
        r=0;
    }
    return 0;

}
