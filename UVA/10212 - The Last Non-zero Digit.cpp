#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int m, n, i, ans, x;
    while(scanf("%lld %lld", &n, &m)!=EOF)
    {
        if(m==0) printf("1\n");
        else
        {
            ans=1;
            x=n-m+1;
            for(i=n; i>=x; i--)
            {
                ans*=i;
                while(ans%10==0)ans/=10;
                ans%=1000000000;
            }
            printf("%lld\n", ans%10);
        }
    }
    return 0;
}
