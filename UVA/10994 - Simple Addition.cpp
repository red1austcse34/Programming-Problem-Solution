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

long long int f(long long int x)
{
    if(!x) return 0;
    long long int  m = x % 10;
    return (x/10)*45+(m*m+m)/2+f(x/10);
}

int main()
{
    long long int p, q;
    while(scanf("%lld %lld", &p, &q)!=EOF)
    {
        if(p<0 && q<0)break;
        printf("%lld\n", f(q)-f(p-1));
    }
    return 0;
}

