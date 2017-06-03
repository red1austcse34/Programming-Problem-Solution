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
    int l, l1, l2, i, j, bin;
    char s[1000], s1[1000], s2[1000];
    while(gets(s))
    {
        bin=0;
        l1=-1;
        l=strlen(s);
        if(l==4 && s[0]=='D' && s[1]=='O' && s[2]=='N' && s[3]=='E')break;
        for(i=0; i<l; i++)
        {
            if(s[i]!='.' && s[i]!=',' && s[i]!='?' && s[i]!='!' && s[i]!=' ')
            {
                l1++;
                s1[l1]=s[i];
            }
        }
        for(j=0;j<=l1;j++)
        {
            if(s1[j]!=s1[l1-j] && s1[j]!=(s1[l1-j]+32) && s1[j]!=(s1[l1-j]-32))
            {
                printf("Uh oh..\n");
                bin=1;
                break;
            }
        }
        if(bin==0)printf("You won't be eaten!\n");
    }
    return 0;
}
