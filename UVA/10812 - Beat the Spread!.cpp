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
    int a, b, x, y, i=1, t;
    scanf("%d", &t);
    while(i<=t)
    {
        scanf("%d %d",&a,&b);
        if(a>=b&&(a+b)%2==0)
        {
            x=(a+b)/2;
            y=(a-b)/2;
            printf("%d %d\n",x,y);
        }
        else printf("impossible\n");
        i++;
    }
    return 0;
}
