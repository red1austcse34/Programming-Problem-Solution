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
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0) break;
        int i;
        long long int sum=0;
        for(i=1;i<=n;i++)
        {
            sum=sum+(i*i);
        }
        printf("%lld\n",sum);
    }
    return 0;
}
