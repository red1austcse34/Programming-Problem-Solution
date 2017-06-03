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

long long mod = 1000000007; //modulo number

long long Binary_Expo(long long, long long); //bigmod algo
long long Binary_Expo(long long n, long long p)
{
    if(!p) return 1;
    if(p == 1)return n;

    if(p%2)return (Binary_Expo(n,p-1)*(n%p))% mod;
    long long res=Binary_Expo(n, p/2) % mod;
    return (res*res)%mod;
}

int main()
{
    long long int n, p, t, i;
    scanf("%lld", &t);
    for(i=0; i<t; i++)
    {
        scanf("%lld", &n);
        long long res= (Binary_Expo(2,n-1)*n)%mod;
        printf("Case #%lld: %lld\n", i+1, res);
    }
    return 0;
}


