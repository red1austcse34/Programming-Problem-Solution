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
    //freopen("in.txt", "r", stdin);
    char str[10];
    int i, j, t, w1, w2, l;
    double ans;

    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d", &w1);
        gets(str);
        l=strlen(str);
        if(l>3)
        {
            w2=(int)str[3]-'0';
        }
        else
        {
            w2=0;
        }
        ans=w1*0.5+w2*0.05;
        cout << "Case " << i+1 << ": " << ans << endl;
        memset(str, '\0', sizeof(str));
    }
    return 0;
}

