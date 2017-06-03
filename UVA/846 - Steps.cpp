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
    int t, a, b, c;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d", &a, &b);
        c = (int) round(sqrt(b - a));
        printf("%d\n", 2*c-(c && c*c>=b-a));
    }

    return 0;
}
