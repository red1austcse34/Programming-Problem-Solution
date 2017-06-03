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

int ar1[30], ar2[30];

int main()
{
    int i, l1, l2;
    char s1[1010], s2[1010];
    while(gets(s1))
    {

        gets(s2);
        l1=strlen(s1);
        l2=strlen(s2);
        for(i=0; i<l1 || i<l2; i++)
        {
            if(i<l1)ar1[s1[i]-'a']++;
            if(i<l2)ar2[s2[i]-'a']++;
        }
        for(i=0; i<26; i++)
        {
            l1=min(ar1[i], ar2[i]);
            while(l1--)printf("%c", i+'a');
        }
        printf("\n");
        memset(ar1, 0, sizeof(ar1));
        memset(ar2, 0, sizeof(ar2));
    }
    return 0;
}
