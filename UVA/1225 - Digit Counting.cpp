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
    int cnt[10], n, t, i, tmp;
    scanf("%d", &t);
    while(t--)
    {
        cin>>n;
        memset(cnt, 0, sizeof(cnt));
        for(i=1;i<=n;i++)
        {
            tmp=i;
            while(tmp)
            {
                cnt[tmp%10]++;
                tmp/=10;
            }
        }
        for(i=0;i<=9;i++)
            {
                if(i!=0)printf(" ");
                printf("%d", cnt[i]);
            }
        printf("\n");
    }
    return 0;
}
