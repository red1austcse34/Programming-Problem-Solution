#include <cstdio>
#include <sstream>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <set>
#include <queue>
#include <stack>
#include <list>
#include <iostream>
#include <fstream>
#include <numeric>
#include <string>
#include <vector>
#include <cstring>
#include <map>
#include <iterator>


using namespace std;

const int mod=1000003;
long long int fact[1000010];

long long Binary_Expo(long long, long long);
void f(void);

void f(void)
{
    fact[0]=1;
    for(int i=1; i<1000001; i++)
    {
        fact[i]=fact[i-1]*i;
        fact[i]%=mod;
    }
}

long long Binary_Expo(long long n, long long p)
{
    if(!p) return 1;
    if(p == 1)return n;

    if(p%2)return (Binary_Expo(n,p-1)*n)% mod;
    long long res=Binary_Expo(n, p/2) % mod;
    return (res*res)%mod;
}

int main()
{
    f();
    long long r, n, nr, t, i, ans;

    scanf("%lld", &t);
    for(i=0; i<t; i++)
    {
        scanf("%lld %lld", &n, &r);
        nr=n-r;
        ans=1;
        ans*=fact[n];
        ans*=Binary_Expo(fact[r], mod-2);
        ans%=mod;
        ans*=Binary_Expo(fact[nr], mod-2);
        ans%=mod;
        printf("Case %lld: %lld\n", i+1, ans);
    }
    return 0;
}
