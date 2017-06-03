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
    double a, b, c, ta, c1a, c2a, s, ans1, ans2, maxi, r2, r1;

    while(scanf("%lf %lf %lf", &a, &b, &c)!=EOF)
    {
        s=(a+b+c)/2;
        ta=sqrt(s*(s-a)*(s-b)*(s-c));
        r1=(a*b*c)/(4*ta);
        c1a=M_PI*r1*r1;
        r2=ta/s;
        c2a=M_PI*r2*r2;
        ans1=c1a-ta;
        ans2=ta-c2a;
        printf("%.4lf %.4lf %.4lf\n", ans1, ans2, c2a);
    }

    return 0;
}
