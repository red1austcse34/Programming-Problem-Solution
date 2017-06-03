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

struct trees
{
    string na;
    double s, p;
}tr[10010];

int main()
{
    //freopen("in.txt", "r", stdin);
    string n;
    long int t, i, nu;
    map <string, int> mp;
    map <string, int> :: iterator it;
    scanf("%ld\n\n", &t);
    while(t--)
    {
        nu=0;
        while(getline(cin, n))
        {
            int l= n.size();
            if(!l)break;
            mp[n]++;
            nu++;
        }
        for(it=mp.begin(), i=0; it!=mp.end(); it++, i++)
        {
            tr[i].na=it->first; tr[i].s=it->second;
            tr[i].s=(tr[i].s*100.0)/(nu*1.0);
        }
        for(int j=0; j<i; j++)
        {
            cout << tr[j].na << " ";
            printf("%.4lf\n", tr[j].s);
        }
        if(t>0)
        {
            printf("\n");
            mp.clear();
        }
    }

    return 0;
}

