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
    int n,i,j,k,co=0,p=0;
    char s[100][100];
    char c[16][100] = {"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",s[i]);
    }
    if(n>16)
    {
        k=(int)ceil(n/16)+1;
    }
    else k=1;
    for(j=0;j<16*k;j++)
    {
        if(co==n)
        co=0;
        if(p==16)
        p=0;
        printf("%s: %s\n",s[co],c[p]);
        co++;
        p++;
    }
    return 0;
}
