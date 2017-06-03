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
    long long a, b, c, d, e;
    while(scanf("%lld %lld %lld %lld %lld", &a, &b, &c, &d, &e)!=EOF)
    {
        if(a==0 && b==0 && c==0 && d==0 && e==0)break;
        printf("%lld\n", a*b*c*d*d*e*e);
    }
    return 0;
}
