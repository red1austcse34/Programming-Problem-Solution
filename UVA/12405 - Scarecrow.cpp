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


int main()
{
    int t, n, c;
    char str[105];

    scanf("%d", &t);
    for(int i=0; i<t; i++)
    {
        scanf("%d %s", &n, str);
        c=0;
        for(int j=0; j<n;)
        {
            if(str[j]=='#')
            {
                j++;
            }
            else
            {
                c++;
                j+=3;
            }
        }
        printf("Case %d: %d\n", i+1, c);
    }
    return 0;
}
