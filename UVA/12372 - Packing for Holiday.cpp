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
    int x, y, z, i=1, n;
    scanf("%d",&n);
    n++;
    for(i=1; i<n; i++)
    {
       scanf("%d %d %d",&x, &y, &z);
       printf("Case %d: ", i);
       if(x>20||y>20||z>20)puts("bad");
       else puts("good");
    }
    return 0;
}
