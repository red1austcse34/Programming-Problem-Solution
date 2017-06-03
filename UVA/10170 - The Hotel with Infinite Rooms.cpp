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
    long long n, d, sum;
    while(scanf("%lld %lld", &n, &d)!=EOF)
    {
        sum=n;
        while(sum<d)
        {
            n++;
            sum+=n;
        }
        printf("%lld\n", n);
    }
    return 0;
}
