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
    long long m, x, i, j, ans;
    while(scanf("%lld %lld", &m, &x))
    {
        if(x==0 && m==0)break;
        if(x==100)printf("Not found\n");
        else
        {
            ans=(m-1)*100/(100-x);
            if((m-1)*100%(100-x)==0)ans--;
            if(ans<m)printf("Not found\n");
            else printf("%lld\n", ans);
        }
    }
    return 0;
}


