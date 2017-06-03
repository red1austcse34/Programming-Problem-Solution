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


using namespace std;

bool self[1000001];

int main()
{
    long int i, sum=0, num=0;
    for(i=0; i<1000001; i++)
    {
        num=i;
        sum=i;
        while(num)
        {
            sum+=num%10;
            num/=10;
        }
        if(sum<1000001)self[sum]=true;
    }
    for(i=0; i<1000001; i++)
    {
        if(!self[i])printf("%ld\n", i);
    }
    return 0;
}
