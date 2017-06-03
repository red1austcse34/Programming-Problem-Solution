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
    long long int fact[25], t, i, j, l, div, al[30];
    char str[25];
    fact[0]=1;
    for(i=1; i<=20; i++)
        fact[i]=fact[i-1]*i;
    scanf("%lld\n", &t);
    for(i=0; i<t; i++)
    {
        div=1;
        gets(str);
        l=strlen(str);
        memset(al, 0, sizeof(al));
        for(j=0; j<l; j++)
        {
            al[str[j]-'A']++;
        }
        for(j=0; j<26; j++)
            if(al[j])div*=fact[al[j]];
        printf("Data set %lld: %lld\n", i+1, fact[l]/div);
    }
    return 0;
}
