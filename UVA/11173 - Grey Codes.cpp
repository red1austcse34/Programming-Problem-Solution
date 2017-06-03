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
    int t, i, j, n, k;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d %d", &n, &k);
        j=k^(k>>1);
        printf("%d\n", j);
    }
    return 0;
}
