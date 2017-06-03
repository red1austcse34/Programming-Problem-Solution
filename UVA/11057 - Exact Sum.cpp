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
    long int n, m, a[100000], d, i, j, b, c;
    while(scanf("%ld",&n)!=EOF)
    {
        d=2000000;
        for(i=1;i<=n;i++)scanf("%ld",&a[i]);
        scanf("%ld",&m);
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if((a[i]+a[j])==m && i!=j)
                {
                    if(a[i]>a[j])
                    {
                        if((a[i]-a[j])<d)
                        {
                            b=a[j];
                            c=a[i];
                            d=a[i]-a[j];
                        }
                    }
                    else
                    {
                        if((a[j]-a[i])<d)
                        {
                            b=a[i];
                            c=a[j];
                            d=a[j]-a[i];
                        }
                    }
                }
            }
        }
        printf("Peter should buy books whose prices are %ld and %ld.\n\n",b,c);
    }
    return 0;
}
