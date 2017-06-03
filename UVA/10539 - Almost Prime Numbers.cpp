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

vector <long long int> ans;
bool mark[1000100];


int main()
{
    long long int i, j;
    mark[0]=true;
    mark[1]=true;
    for(j=4; j<10000000000001; j*=2)ans.push_back(j);
    for(i=4; i<1000001; i+=2)mark[i]=true;
    for(i=3; i*i<1000001; i+=2)
    {
        if(!mark[i])
        {
            for(j=i*i; j<10000000000001; j*=i)ans.push_back(j);
            for(j=i*i; j<1000001; j+=(2*i))mark[j]=true;
        }
    }
    for(; i<1000001; i++)
    {
        if(!mark[i])
        {
            for(j=i*i; j<10000000000001; j*=i)ans.push_back(j);
        }
    }
    sort(ans.begin(), ans.end());
    long long int x, y, t, c;
    scanf("%lld", &t);
    while(t--)
    {
        i=0; c=0;
        scanf("%lld %lld", &x, &y);
        while(ans[i]<x)i++;
        for( ; ans[i]<=y; i++)c++;
        printf("%lld\n", c);
    }
    return 0;
}
