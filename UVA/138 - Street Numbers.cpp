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
    long long int n, i=10, x=8;
    double n2;
    while(i)
    {
        n2=sqrt((x*x+x)/2.0);
        n=n2;
        if(n==n2)
        {
            printf("%10lld%10lld\n", n, x);
            i--;
        }
        x++;
    }
    return 0;
}
