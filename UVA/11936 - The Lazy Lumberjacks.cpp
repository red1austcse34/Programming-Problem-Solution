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
    long int a, b,  c,t;
    scanf("%ld",&t);
    while(t--)
    {
        scanf("%ld%ld%ld",&a,&b,&c);
        if(a+b<=c || b+c<=a || a+c<=b)printf("Wrong!!\n");
        else printf("OK\n");
    }
    return 0;
}
