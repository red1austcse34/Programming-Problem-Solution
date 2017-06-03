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

string str, f;

int main()
{
    int t, q;
    scanf("%d\n", &t);
    while(t--)
    {
        cin >> str;
        scanf("%d\n", &q);
        while(q--)
        {
            cin >> f;
            if(strstr(str.c_str(), f.c_str()))printf("y\n");
            else printf("n\n");
        }
    }
    return 0;
}
