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


using namespace std;

int main()
{
    int t, i, j;
    double n, m, a, b, tar, ac, to;

    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%lf %lf %lf %lf", &n, &m, &a, &b);
        ac=n*a;
        tar=m*(a+b);
        to=(tar-ac)/b;
        if(to<0 || to>10){printf("Case #%d: Impossible\n", i+1);}
        else{printf("Case #%d: %.2lf\n", i+1, to);}
    }
    return 0;
}
