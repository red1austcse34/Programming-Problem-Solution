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
#include <iomanip>


using namespace std;

int main()
{
    int n, x1, x2, y1, y2;

    while(scanf("%d", &n)!=EOF && n)
    {
        scanf("%d %d", &x1, &y1);
        for(int i=0;i<n;i++)
        {
            scanf("%d %d", &x2, &y2);
            if(x1==x2 || y1==y2) printf("divisa\n");
            else if(x2>x1 && y2>y1) printf("NE\n");
            else if(x2<x1 && y2>y1) printf("NO\n");
            else if(x2>x1 && y2<y1) printf("SE\n");
            else printf("SO\n");
        }
    }

    return 0;
}
