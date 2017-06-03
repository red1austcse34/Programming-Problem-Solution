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

vector <long long int> prime;
bool mark[33005];


int main()
{
    long long int i, j;
    mark[0]=true;
    mark[1]=true;
    prime.push_back(2);
    for(i=4; i<33000; i+=2)mark[i]=true;
    for(i=3; i*i<33000; i+=2)
    {
        if(!mark[i])
        {
            prime.push_back(i);
            for(j=i*i; j<33000; j+=(2*i))mark[j]=true;
        }
    }
    for(; i<33000; i+=2)
    {
        if(!mark[i])
        {
            prime.push_back(i);
        }
    }
    long long int x, y, t, c;
    while(scanf("%lld", &x)&&x)
    {
        i=0; c=0;
        while(prime[i]<=x/2)
        {
            t=x-prime[i];
            if(!mark[t])c++;
            i++;
        }
        printf("%lld\n", c);
    }
    return 0;
}
