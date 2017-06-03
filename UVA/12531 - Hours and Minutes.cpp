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
    int n;
    while(scanf("%d", &n)!=EOF)
    {
        if(n%6)printf("N\n");
        else printf("Y\n");
    }
    return 0;
}
