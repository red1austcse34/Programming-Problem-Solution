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

long int mo[15], m;
bool vis[1000100], dp[1000100];

int main()
{
    long int n, i, j;
    while(scanf("%ld", &n)!=EOF)
    {
        scanf("%ld", &m);
        for(i=0; i<m; i++)scanf("%ld", &mo[i]);
        dp[0]=false;
        for(i=1; i<=n; i++)
        {
            dp[i]=false;
            for(j=0; j<m; j++)
            {
                if(i>=mo[j] && !dp[i-mo[j]])
                {
                    dp[i]=true;
                    break;
                }
            }
        }
        if(dp[n])printf("Stan wins\n");
        else printf("Ollie wins\n");
    }
    return 0;
}

