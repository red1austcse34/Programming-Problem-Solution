#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l, i, j, m, p, t, n;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        p=0;
        scanf("%d", &n);
        for(j=0; j<n; j++)
        {
            scanf("%d", &l);
            if(l==p+1)p++;
        }
        printf("Case %d: %d\n", i+1, n-p);
    }
    return 0;
}
