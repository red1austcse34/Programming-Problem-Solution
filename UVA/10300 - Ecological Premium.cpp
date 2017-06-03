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

int main()
{
    long long a,t,n,b,c,i,j,ans;
    while(scanf("%lld",&t)==1)
    {
        for(i=0;i<t;i++)
        {
            ans=0;
            scanf("%lld",&n);
            for(j=0;j<n;j++)
            {
                scanf("%lld%lld%lld",&a,&b,&c);
                ans+=a*c;
            }
        printf("%lld\n",ans);
        }
    }
    return 0;
}
