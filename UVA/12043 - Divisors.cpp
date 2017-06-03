#include <bits/stdc++.h>

using namespace std;

long long int ndiv[100010], sdiv[100010];


int main()
{
    long long int i, j;
    ndiv[0]=0;
    sdiv[0]=0;
    for(i=1; i<100001; i++)
    {
        for(j=i;j<100001; j+=i)
        {
            ndiv[j]++;
            sdiv[j]+=i;
        }
    }
    long long int a, b, k, ans1, ans2, t;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld %lld %lld", &a, &b, &k);
        if(a%k)a+=(k-(a%k));
        ans1=0; ans2=0;
        for(i=a; i<=b; i+=k)
        {
            ans1+=ndiv[i];
            ans2+=sdiv[i];
        }
        printf("%lld %lld\n", ans1, ans2);
    }
    return 0;
}
