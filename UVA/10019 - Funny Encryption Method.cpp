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
    long int t,m,n,d,db,hb;
    scanf("%ld",&t);
    while(t--)
    {
        scanf("%ld",&m);
        db=hb=0,n=m;
        while(n)db=db+(n&1),n=n>>1;
        while(m)
        {
            d=m%10;
            while(d)hb=hb+(d&1),d=d>>1;
            m=m/10;
        }
        printf("%ld %ld\n",db,hb);
    }
    return 0;
}
