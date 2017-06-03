#include <bits/stdc++.h>

using namespace std;

long long int mat[105][105];

int main()
{
    int i, j, k, f, n, t;
    char a[5], b[5];
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        f=0;
        scanf("%s %s %d", &a, &b, &n);
        for(j=0; j<n; j++)
        {
            for(k=0; k<n; k++)
            {
                scanf("%lld", &mat[j][k]);
            }
        }
        for(j=0; j<n; j++)
        {
            for(k=0; k<n; k++)
            {
                if(mat[j][k]<0 || mat[j][k]!=mat[n-1-j][n-1-k])
                {
                    f=1;
                    break;
                }
            }
            if(f)break;
        }
        if(f)printf("Test #%d: Non-symmetric.\n", i+1);
        else printf("Test #%d: Symmetric.\n", i+1);
    }
    return 0;
}
