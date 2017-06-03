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
    long int n, d, r, m[105], e[105], t, i, sum;
    while(scanf("%ld %ld %ld", &n, &d, &r)!=EOF)
    {
        if(n==0 && d==0 && r==0)break;
        for(i=0; i<n; i++)
        {
            scanf("%ld", &m[i]);
        }
        for(i=0, sum=0; i<n; i++)
        {
            scanf("%ld", &e[i]);
        }
        sort(m, m+n);
        sort(e, e+n);
        for(i=0, sum=0; i<n; i++)
        {
            t=(m[n-1-i]+e[i]-d);
            if(t<0)continue;
            sum+=(t*r);
        }
        printf("%ld\n", sum);
    }
    return 0;
}
