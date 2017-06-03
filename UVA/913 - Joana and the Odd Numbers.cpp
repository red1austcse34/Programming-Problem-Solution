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
    long long n;
    while(scanf("%lld", &n)!=EOF)
    {
        n=(n/2+1);
        n*=n;
        n=(n*2-1)*3-6;
        printf("%lld\n", n);
    }
    return 0;
}
