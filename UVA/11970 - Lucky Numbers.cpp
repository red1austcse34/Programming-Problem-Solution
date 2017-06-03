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
    long int t, i, n, j, l, x;
    scanf("%ld", &t);
    for(i=0; i<t; i++)
    {
        vector <long int> ans;
        scanf("%ld", &n);
        for(j=1; j*j<n; j++)
        {
            x=n-j*j;
            if(n%j==0)ans.push_back(x);
        }
        printf("Case %ld: ", i+1);
        x=ans.size();
        for(j=x-1; j>=0; j--)
        {
            printf("%ld", ans[j]);
            if(j>0)printf(" ");
        }
        printf("\n");
    }
    return 0;
}
