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
    int x, n, i, sum, g1[30], g2[30], j, k;

    while(scanf("%d", &n)!=EOF)
    {
        for(i=0; i<n; i++)
        {
            scanf("%d", &g1[i]);
        }
        for(i=0; i<n; i++)
        {
            scanf("%d", &g2[i]);
        }
        for(i=0, sum=0; i<n; i++)
        {
            for(j=i; j<n; j++)
            {
                if(g2[i]==g1[j])break;
            }
            for(k=j; k>i; k--)
            {
                g1[k]=g1[k-1];
                sum++;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}

