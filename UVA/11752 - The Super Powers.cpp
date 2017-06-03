#include <bits/stdc++.h>

using namespace std;

unsigned long long int notPrime[]={4,6,8,9,10,12,14,15,16,18,20,21,22,24,25,26,27,28,30,32,33,34,35,36,38,39,40,42,44,45,46,48,49,50,51,52,54,55,56,57,58,60,62,63,64};
//vector <unsigned long long int> notPrime;
set <unsigned long long int> s;
set <unsigned long long int> :: iterator it;
bool np[64];

unsigned long long int p(unsigned long long int a, unsigned long long int b)
{
    unsigned long long int ans=1;
    while(b--)
    {
        ans*=a;
    }
    return ans;
}

int main()
{
    //freopen("out.txt", "w", stdout);
    unsigned long long int i, j;
    /*np[0]=true;
    np[1]=true;
    for(i=2; i*i<=64; i++)
    {
        if(!np[i])for(j=i*i; j<64; j+=(2*i))np[j]=true;
    }
    for(i=4; i<64; i++)
    {
        if(np[i])notPrime.push_back(i);
    }
    notPrime.push_back(64);*/
    s.insert(1);
    for(i=2; i<65536; i++)
    {
        unsigned long long int x=64.0*(log(2)/log(i));
        for(j=0; notPrime[j]<=x; j++)
        {
            s.insert(p(i,notPrime[j]));
        }
    }
    it=s.begin(); it++;
    for(; it!=s.end(); it++)printf("%llu\n", *it);
    return 0;
}
