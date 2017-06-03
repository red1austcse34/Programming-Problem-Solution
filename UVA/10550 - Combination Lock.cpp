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
    int n, a, b, c, d;
    while(scanf("%d %d %d %d", &a, &b, &c, &d)!=EOF)
    {
        if(a==0 && b==0 && c==0 && d==0)break;
        int ans=1080;
        if(a<b) ans+=(40+a-b)*9;
        else ans+=(a-b)*9;
        if(b>c)  ans+=(40+c-b)*9;
        else ans+=(c-b)*9;
        if(c<d) ans+=(40+c-d)*9;
        else ans+=(c-d)*9;
        printf("%d\n", ans);
    }
    return 0;
}
