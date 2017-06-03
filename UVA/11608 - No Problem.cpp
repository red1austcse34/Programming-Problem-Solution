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
    int x, pn[12], ph[12], i, j, t=1;

    while(scanf("%d", &x) && x>=0)
    {
        for(i=0; i<12; i++)
        {
            scanf("%d", &ph[i]);
        }
        printf("Case %d:\n", t++);
        for(i=0; i<12; i++)
        {
            scanf("%d", &pn[i]);
            if(pn[i]<=x)
            {
                printf("No problem! :D\n");
                x=x-pn[i]+ph[i];
            }
            else
            {
                printf("No problem. :(\n");
                x=x+ph[i];
            }
        }
    }
    return 0;
}

