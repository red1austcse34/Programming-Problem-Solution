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
    double r, n, ans;

    while(scanf("%lf %lf", &r, &n)!=EOF)
    {
        ans=n*.5*r*r*sin(acos(-1.0)*2.0/n);
        printf ("%.3lf\n", ans);
    }
    return 0;
}
