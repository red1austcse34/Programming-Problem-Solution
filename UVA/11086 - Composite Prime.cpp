#include <bits/stdc++.h>

using namespace std;

int prime[2000000];
int main()
{
    //freopen("out.txt", "w", stdout);
    long int i, j, ans, n;
    prime[0]=0;
    prime[1]=0;
    for(i=4; i<1048577; i+=2)prime[i]=1;
    for(i=3; i*i<1048577; i+=2)
    {
        if(!prime[i])
        {
            for(j=i*i; j<1048577; j+=(2*i))prime[j]=1;
        }
    }
    for(i=4; i<1048577; i++)
    {
        if(prime[i])for(j=2*i; j<1048577; j+=i)prime[j]=2;
    }
    while(scanf("%ld", &n)!=EOF)
    {
        ans=0;
        while(n--)
        {
            scanf("%ld", &i);
            if(prime[i]==1)ans++;
        }
        printf("%ld\n", ans);
    }
    return 0;
}
