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
    int t, i;
    double u, v, d, t1, t2;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%lf %lf %lf", &d, &v, &u);
        if(v==0 || u==0 || u<=v)printf("Case %d: can't determine\n", i+1);
        else
        {
            t1=d/u;
            t2=d/sqrt(u*u-v*v);
            printf("Case %d: %.3lf\n", i+1, t2-t1);
        }
    }
    return 0;
}
