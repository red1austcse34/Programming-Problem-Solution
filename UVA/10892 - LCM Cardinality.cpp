#include <bits/stdc++.h>

using namespace std;

vector <long int> divi;

long long int GCD(long long int m, long long int n)
{
    return n ? GCD(n, m%n): m;
}

long long int LCM(long long int m, long long int n)
{
    return (m*n / GCD(m, n));
}


int main()
{
    long long int ans, n, i, j, s;
    while(scanf("%lld", &n) && n)
    {
        ans=0;
        for(i=1; i*i<=n; i++)
        {
            if(n%i==0)
            {
                divi.push_back(i);
                divi.push_back(n/i);
            }
        }
        i--;
        if(i*i==n)divi.pop_back();
        s = divi.size();
        for(i=0; i<s; i++)
        {
            for(j=i; j<s; j++)
            {
                if(LCM(divi[i], divi[j])==n)ans++;
            }
        }
        printf("%lld %lld\n", n, ans);
        divi.clear();
    }
}
