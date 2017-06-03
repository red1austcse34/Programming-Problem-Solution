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
    int i, j, s;
    char n[1050];
    while(gets(n))
    {
        s=0;
        i=strlen(n);
        for(j=0; j<i; j++)
        {
            s=s*10+n[j]-'0';
            s=s%11;
        }
        if(s==0 && i==1)break;
        else if(s==0)printf("%s is a multiple of 11.\n",n);
        else printf("%s is not a multiple of 11.\n",n);
    }
    return 0;
}
