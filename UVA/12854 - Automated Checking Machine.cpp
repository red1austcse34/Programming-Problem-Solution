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
    int x[6], y[6], i, sum, flag;
    while(scanf("%d",&x[0])==1)
    {
        flag=0;
        for(i=1;i<5;i++)scanf("%d",&x[i]);
        for(i=0;i<5;i++)scanf("%d",&y[i]);
        for(i=0;i<5;i++)
        {
            sum = x[i] + y[i];
            if(sum==1)flag=0;
            else
            {
                flag=1;
                break;
            }
        }
        if(flag==0)printf("Y\n");
        else printf("N\n");
    }
    return 0;
}
