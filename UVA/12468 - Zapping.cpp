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
    long long int a, b, c, d, ans;
    while(cin>>a>>b)
    {
        if(a==-1 && b==-1)break;
        c=abs(a-b);
        if(c>=50)
        c=100-c;
        cout<<c<<endl;

    }
    return 0;
}
