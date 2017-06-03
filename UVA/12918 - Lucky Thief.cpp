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


using namespace std;

int main()
{
    long long int t, n, m, ans;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld %lld", &n, &m);
        if(n==1 && m==1)ans=1;
        else if(n==1)ans=m-1;
        else ans=(m*(m-1))/2-((m-n)*(m-n-1))/2;
        printf("%lld\n", ans);
    }
    return 0;
}

