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
    unsigned long long m,n,i,j,cnt,ans,s,l,m1,n1;
    while(cin>>n>>m)
    {
        if(n==0 && m==0)return 0;
        if(m>(n-m))s=n-m;
        else s=m;
        n1=m1=1;
        for(i=0;i<s;i++)
        {
            n1*=(n-i);
            m1*=(i+1);
            for(j=m1;j>1;j--)
                if(m1%j==0 && n1%j==0)
                {
                    n1/=j;
                    m1/=j;
                }
        }
        cout<<n<<" things taken "<<m<<" at a time is "<<n1<<" exactly."<<endl;
    }
    return 0;
}
