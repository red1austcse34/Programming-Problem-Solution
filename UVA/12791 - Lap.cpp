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
    long int a, b, ans;
    while(scanf("%ld %ld", &a, &b)!=EOF)
    {
        ans=b/(b-a);
        if(b%(b-a)!=0)ans++;
        printf("%ld\n", ans);
    }
    return 0;
}
