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

vector <long long int> v;

int main()
{
    long long int t, l, p, i, d;

    scanf("%lld", &t);
    for(i=0; i<t; i++)
    {
        scanf("%lld %lld", &l, &p);
        d=l-p;
        for(long long int j=1; j*j<=d; j++)
        {
            if(d%j==0)
            {
                if(j>p){v.push_back(j);}
                if((d/j)>p && j*j!=d){v.push_back(d/j);}
            }
        }
        sort(v.begin(), v.end());
        printf("Case %lld:", i+1);
        if(v.size())
        {
            for(long long int j=0; j<v.size(); j++)
            {
                printf(" %lld", v[j]);
            }
            printf("\n");
        }
        else
        {
            printf(" impossible\n");
        }
        v.clear();
    }
    return 0;
}
