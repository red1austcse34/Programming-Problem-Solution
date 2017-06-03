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
    long int t, n, r[550], i, j, m;

    scanf("%ld", &t);
    while(t--)
    {
        m=999999999;
        scanf("%ld", &n);
        for(i=0; i<n; i++)
        {
            scanf("%ld", &r[i]);
        }
        sort(r, r+n);
        for(i=0; i<n; i++)
        {
            long int dis=0;
            for(j=0; j<n; j++)
            {
                dis+=abs(r[j]-r[i]);
            }
            if(j==1)m=dis;
            if(dis<m)m=dis;
        }
        printf("%ld\n", m);
    }
    return 0;
}
