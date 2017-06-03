#include <bits/stdc++.h>

using namespace std;

bool p[1000010];
int c[250], d[250];
vector <long int> primes;
map <long int, long int> mp;
map <long int, long int> :: iterator it;

int main()
{
    long int i, j;
    p[0]=true;
    p[1]=true;
    primes.push_back(2);
    for(i=4; i<1000001; i+=2)p[i]=true;
    for(i=3; i<1001; i+=2)
    {
        if(!p[i])
        {
            primes.push_back(i);
            for(j=i*i; j<1000001; j+=(2*i))p[j]=true;
        }
    }
    for(;i<1000001; i+=2)if(!p[i])primes.push_back(i);
    long int t, l, u, ans, o, p;
    cin >> t;
    while(t--)
    {
        cin >> l >> u;
        i=lower_bound(primes.begin(), primes.end(), l)-primes.begin();
        j=upper_bound(primes.begin(), primes.end(), u)-primes.begin()-1;
        //cout << primes[i] << " " << primes[j] << endl;
        if(i==j){cout << "No jumping champion\n"; continue;}
        while(i+1<=j)
        {
            //mp[primes[i+1]-primes[i]]++;
            c[primes[i+1]-primes[i]]++;
            d[primes[i+1]-primes[i]]++;
            i++;
        }
        sort(c, c+250);
        //cout << c[248] << " " << c[249] << endl;
        if(c[249]==c[248])cout << "No jumping champion\n";
        else
        {
            for(i=0; i<250; i++)
            {
                if(c[249]==d[i]){cout << "The jumping champion is " << i << "\n";break;}
            }
        }
        memset(c, 0, sizeof(c));
        memset(d, 0, sizeof(d));
        /*it=mp.begin();
        ans=it->first;
        p=it->second;
        o=1;
        it++;
        for(; it!=mp.end(); it++)
        {
            if(it->second > p)
            {
                ans=it->first;
                p=it->second;
                o=1;
            }
            else if(it->second==p)o++;
        }
        if(o==1)
        else
        mp.clear();*/
    }
    return 0;
}
