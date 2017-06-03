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

double vol[10100];
int n, f;

int fr(double mid)
{
    int i, j=0;
    for(i=0; i<n; i++)
    {
        j+=vol[i]/mid;
    }
    return j;
}

int main()
{
    double high, low, mid, r;
    int i, j, t;

    scanf("%d", &t);

    for(i=0; i<t; i++)
    {
        scanf("%d%d", &n, &f);
        for(j=0; j<n; j++)
        {
            scanf("%lf", &r);
            vol[j]=r*r*M_PI;
        }
        high=1000000000; low=0;
        for(j=0; j<100; j++)
        {
            mid=(high+low)/2.0;
            if(fr(mid)>=f+1)
            {
                low=mid;
            }
            else high=mid;
        }
        printf("%.4lf\n", mid);
    }
    return 0;
}
