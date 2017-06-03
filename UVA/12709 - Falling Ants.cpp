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
    int t, m, mp, a, l, w, h;

    while(scanf("%d", &t))
    {
        if(t==0)break;
        m = -999;
        a = mp = 0;
        while(t--)
        {
            scanf("%d %d %d", &l, &w, &h);
            a=l*w*h;
            if(h>=m)
            {
                if(h==m){if(a>mp)mp=a;}
                else{m=h; mp=a;}
            }
        }
        printf("%d\n", mp);
    }

    return 0;
}
