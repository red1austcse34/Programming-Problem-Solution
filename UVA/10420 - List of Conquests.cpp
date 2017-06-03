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

struct cn
{
    string co;
    int n;
}s[2010];

int main()
{
    int t, i;
    map <string, int> mp;
    map <string, int> :: iterator it;

    scanf("%d\n" ,&t);
    while(t--)
    {
        char str[100], c[50];
        scanf("%s ", c);
        gets(str);
        mp[c]++;
    }
    for(it= mp.begin(), i=0; it!=mp.end(); it++)
    {
        s[i].co=(it->first); s[i].n=(it->second); i++;
    }
    for(int j=0; j<i; j++)
    {
        cout << s[j].co << " " << s[j].n << endl;
    }
    return 0;
}
