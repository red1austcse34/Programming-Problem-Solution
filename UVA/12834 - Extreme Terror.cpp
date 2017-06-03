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
#include <climits>
#include <iomanip>


using namespace std;

long long int dif[1000100];

int main()
{
    long long int x, t, ans, i, j, m, k;
    scanf("%lld", &t);
    for(i=0; i<t; i++)
    {
        scanf("%lld %lld", &m, &k);
        for(j=0; j<m; j++)
        {
            scanf("%lld", &x);
            dif[j]=-x;
        }
        for(j=0; j<m; j++)
        {
            scanf("%lld", &x);
            dif[j]+=x;
        }
        sort(dif, dif+m);
        j=0;
        while(dif[j]<0 && k)
        {
            k--;
            j++;
        }
        ans=0;
        while(j<m)
        {
            ans+=dif[j];
            j++;
        }
        if(ans<=0)printf("Case %lld: No Profit\n", i+1);
        else printf("Case %lld: %lld\n", i+1, ans);
    }
    return 0;
}
