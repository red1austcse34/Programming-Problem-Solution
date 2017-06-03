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
    vector <int> a;
    int n, i, j, x, l;
    while(scanf("%d", &n))
    {
        if(n==0)break;
        for(i=0; i<n; i++)
        {
            scanf("%d", &x);
            if(x)a.push_back(x);
        }
        l=a.size();
        if(l==0)printf("0");
        else
        {
            for(i=0; i<l; i++)
            {
                printf("%d", a[i]);
                if(i<l-1)printf(" ");
            }
        }
        printf("\n");
        a.clear();
    }
    return 0;
}
