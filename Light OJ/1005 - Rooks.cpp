#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long int ans, i, n, k, t, j;
    scanf("%llu", &t);
    for(i=0; i<t; i++)
    {
        scanf("%llu %llu", &n, &k);
        if(k>n){printf("Case %llu: 0\n", i+1); continue;}
        ans=1;
        for(j=1; j<=k; j++)
        {
            ans=ans*n*n/j;
            n--;
        }
        printf("Case %llu: %llu\n", i+1, ans);
    }
    return 0;
}
