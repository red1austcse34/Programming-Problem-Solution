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
    int n,m,sum,arr[10],k,i,j,s,coun,x;
    while(scanf("%d %d",&n,&m)==2)
    {
        sum=0;
        for(i=n;i<=m;i++)
        {
            k=i;
            s=0;
            while(k>0)
            {
                arr[s++]=k%10;
                k=k/10;
            }
            coun=0;
            for(j=0;j<s-1;j++)
            {
                for(x=j+1;x<s;x++)
                {
                    if(arr[j]==arr[x])
                    {
                        coun=1;
                        break;
                    }
                }
                if(coun==1)
                {
                    break;
                }
            }
            if(coun==0)
            {
                sum++;
            }
            memset(arr,0,sizeof(arr));
        }
        printf("%d\n",sum);
    }

    return 0;
}
