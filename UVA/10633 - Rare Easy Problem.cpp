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
    unsigned long long int n,y,x;
    while(scanf("%llu",&n)==1)
    {
        if(n==0)break;
        else
        {
            if(n>9)
            {
                y=(n*10)/9;
                x=y-1;
                if(n%9==0)
                {
                    printf("%llu %llu\n",x,y);
                }
                else printf("%llu\n",y);
            }
        }
    }

    return 0;
}
