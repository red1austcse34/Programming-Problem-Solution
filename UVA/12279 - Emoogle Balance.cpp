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
    int n, nCase=0, a[1005],i,c1=0,c2=0;;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0) break;
        memset(a, 0, sizeof(a));
        c1=0; c2=0;
        nCase++;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]==0) c2++;
            else c1++;
        }
        printf("Case %d: %d\n", nCase, c1-c2);
    }
    return 0;
}
