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
    int t, i, j, l;

    scanf("%d\n", &t);
    while(t--)
    {
        stack <char> q;
        char str[150];
        gets(str);
        l=strlen(str);
        for(i=0, j=1; i<l; i++)
        {
            if(str[i]=='(' || str[i]=='[')
            {
                q.push(str[i]);
            }
            else if(str[i]==')')
            {
                if(q.empty() || q.top()!='('){q.push('a'); break;}
                else{q.pop();}
            }
            else if(str[i]==']')
            {
                if(q.empty() || q.top()!='['){q.push('a'); break;}
                else{q.pop();}
            }
        }
        if(q.empty()){printf("Yes\n");}
        else{printf("No\n");}
    }
    return 0;
}
