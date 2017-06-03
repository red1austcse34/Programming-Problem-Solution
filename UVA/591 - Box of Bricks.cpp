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
    int n, i, t=0, sum, avg, h[60];
    while(scanf("%d", &n)!=EOF)
    {
        if(n==0)break;
        t++;
        for(i=0, sum=0; i<n; i++)
        {
            scanf("%d", &h[i]);
            sum+=h[i];
        }
        avg=sum/n;
        for(i=0, sum=0; i<n; i++)
        {
            if(avg<h[i])sum+=(h[i]-avg);
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n", t, sum);
    }
    return 0;
}
