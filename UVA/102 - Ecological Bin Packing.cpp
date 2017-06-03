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


using namespace std;

int main()
{
    long int b[3], c[3], g[3], ans, m;
    string str;
    while(scanf("%ld %ld %ld %ld %ld %ld %ld %ld %ld", &b[0], &g[0], &c[0], &b[1], &g[1], &c[1], &b[2], &g[2], &c[2])!=EOF)
    {
        m=INT_MAX;
        ans=c[0]+g[0]+b[1]+g[1]+b[2]+c[2];
        if(ans<m){str="BCG";m=ans;}
        ans=c[0]+g[0]+b[1]+c[1]+b[2]+g[2];
        if(ans<m){str="BGC";m=ans;}
        ans=b[0]+g[0]+c[1]+g[1]+b[2]+c[2];
        if(ans<m){str="CBG";m=ans;}
        ans=b[0]+g[0]+b[1]+c[1]+g[2]+c[2];
        if(ans<m){str="CGB";m=ans;}
        ans=c[0]+b[0]+c[1]+g[1]+b[2]+g[2];
        if(ans<m){str="GBC";m=ans;}
        ans=c[0]+b[0]+b[1]+g[1]+g[2]+c[2];
        if(ans<m){str="GCB";m=ans;}
        cout << str << " " << m << endl;
    }
    return 0;
}
