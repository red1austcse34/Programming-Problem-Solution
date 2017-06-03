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
    int n, t, arr[22], i, dist;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        for(i=0;i<n;i++)scanf("%d", &arr[i]);
        sort(arr, arr+n);
        dist=0;
        for(i=1;i<n;i++)dist+=(arr[i]-arr[i-1]);
        dist*=2;
        printf("%d\n", dist);
    }

    return 0;
}
