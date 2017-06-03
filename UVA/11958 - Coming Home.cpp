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
    int t, i, j, k, h, m, h2, m2, x;

    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d %d:%d", &k, &h, &m);
        int mint=10000;
        while(k--)
        {
            scanf("%d:%d %d", &h2, &m2, &x);
            int y=(60*(h2-h))+(m2-m)+x;
            if(y<x){y+=(24*60);}
            if(y<mint)mint=y;
        }
        printf("Case %d: %d\n", i+1, mint);
    }
    return 0;
}
