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

bool num[20000100];
vector < long int > tp;

int main()
{
    long int i, j, n;
    num[0]=true; num[1]=true;
    for(i=4; i<=20000000; i+=2)num[i]=true;
    for(i=3; i*i<=20000000; i+=2)
        if(num[i]==false)
            for(j=i*i; j<=20000000; j+=(2*i))num[j]=true;
    for(i=2; i<=19999998; i++)
        if(num[i]==false && num[i+2]==false)tp.push_back(i);
    while(scanf("%ld", &n)!=EOF)
    {
        printf("(%ld, %ld)\n", tp[n-1], tp[n-1]+2);
    }
    return 0;
}
