#include <bits/stdc++.h>

using namespace std;

bool prime[10000010];
vector <long int> pr;
//map <long int, long int>mp;
//map <long int, long int> :: iterator it;

void sieve()
{
    long int i,j;
    prime[2]=1;
    pr.push_back(2);
    for(i=4; i<10000001; i+=2)prime[i]=true;
    for(i=3; i*i<=10000000; i+=2)
    {
        if(!prime[i])
        {
            pr.push_back(i);
            for(j=i*i; j<10000001; j+=(2*i))prime[j]=true;
        }
    }
    for(; i<10000001; i+=2)
    {
        if(!prime[i])pr.push_back(i);
    }
}

int main()
{
    //freopen("out.txt", "w", stdout);
    sieve();
    long long int i, j, n, r, c, ans, s;
    s=pr.size();
    while(cin>>n && n)
    {
        n=abs(n);
        c=0;
        for(i=0; n>1 && pr[i]<=n && i<s; i++)
        {
            if(n%pr[i]==0)
            {
                c++;
                while(n>1 && n%pr[i]==0)n/=pr[i];
                ans=pr[i];
            }
        }
        if(n==1 && c>1)cout << ans << "\n";
        else if(n!=1 && c>0)cout << n << "\n";
        else cout << "-1\n";
    }
    return 0;
}
