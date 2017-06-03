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
    int m[105][105], sum[105][105], dp[105], n, ans, i, j, k;
    while(scanf("%d", &n)!=EOF)
    {
        for(i=0; i<n; i++)
        {
            sum[i][0]=0;
            for(j=0; j<n; j++)
            {
                scanf("%d", &m[i][j]);
                sum[i][j+1]=sum[i][j]+m[i][j];
            }
        }
        ans=INT_MIN;
        for(i=0; i<n; i++)
        {
            for(j=i; j<n; j++)
            {
                dp[0]=0;
                for(k=0; k<n; k++)
                {
                    dp[k+1]=max(sum[k][j+1]-sum[k][i]+dp[k], sum[k][j+1]-sum[k][i]);
                    ans=max(ans, dp[k+1]);
                }
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}
