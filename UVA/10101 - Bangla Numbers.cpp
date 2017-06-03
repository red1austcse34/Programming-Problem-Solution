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

void trans(long long n)
{
    if(n>=10000000)
    {
        trans(n/10000000);
        printf(" kuti");
        n%=10000000;
    }
    if(n>=100000)
    {
        trans(n/100000);
        printf(" lakh");
        n%=100000;
    }
    if(n>=1000)
    {
        trans(n/1000);
        printf(" hajar");
        n%=1000;
    }
    if(n>=100)
    {
        trans(n/100);
        printf(" shata");
        n%=100;
    }
    if(n)
    {
        printf(" %d", n);
    }
}

int main()
{
    long long int n, i=0;
    while(scanf("%lld", &n)!=EOF)
    {
        printf("%4lld.", ++i);
        if(n==0){printf(" 0\n"); continue;}
        trans(n);
        printf("\n");
    }
    return 0;
}
