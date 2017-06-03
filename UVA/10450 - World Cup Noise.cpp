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
    long long int a,b,i,j,k,l,ar[52];
    ar[0]=ar[1]=1;
    for(i=2;i<52;i++)ar[i]=ar[i-1]+ar[i-2];
    scanf("%lld",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%lld",&b);
        printf("Scenario #%lld:\n%lld\n\n",i,ar[b+1]);
    }
    return 0;
}
