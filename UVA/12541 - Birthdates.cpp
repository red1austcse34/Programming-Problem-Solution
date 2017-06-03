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


using namespace std;

struct people{
    char name[20];
    int d, m, y;
}p[105];

bool cmp(people a, people b)
{
    if(a.y==b.y)
    {
        if(a.m==b.m)
        {
            return a.d >= b.d;
        }
        else return a.m > b.m;
    }
    else return a.y > b.y;
}

int main()
{
    int i, j, n;
    scanf("%d\n", &n);
    for(i=0; i<n; i++)
    {
        scanf("%s %d %d %d", &p[i].name, &p[i].d, &p[i].m, &p[i].y);
    }
    sort(p, p+n, cmp);
    printf("%s\n%s\n", p[0].name, p[n-1].name);
    return 0;
}
