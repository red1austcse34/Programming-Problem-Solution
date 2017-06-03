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


int main()
{
    int n, a[100000], i, j;
    while(scanf("%d", &n))
    {
        if(n==0)break;
        for(i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
        }
        long long int ans=0;
        for(i=0; i<n-1; i++)
        {
            ans+=abs(a[i]);
            a[i+1]+=a[i];
        }
        printf("%lld\n", ans);
    }
    return 0;
}
