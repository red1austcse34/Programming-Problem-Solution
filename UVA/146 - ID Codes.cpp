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

char a[60];

int main()
{
    int l;
    while(gets(a))
    {
        if(a[0]=='#')break;
        l=strlen(a);
        if(next_permutation(a, a+l))puts(a);
        else puts("No Successor");
    }
    return 0;
}
