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


using namespace std;

long int tpage[14143];

void tp();
void tp()
{
    long int i=1;
    tpage[0]=0;
    while(i<14143)
    {
        tpage[i]=tpage[i-1]+i;
        i++;
    }
}

int main()
{
    long int s, i, j, ans, n;
    tp();
    while(scanf("%d", &s) && s)
    {
        i=0; j=14143;
        while(1)
        {
            n=(i+j)/2;
            if(tpage[n]<=s && tpage[n+1]>s){printf("%ld %ld\n", tpage[n+1]-s, n+1);break;}
            else if(tpage[n]>s && tpage[n-1]<=s){printf("%ld %ld\n", tpage[n]-s, n); break;}
            else if(tpage[n]>s) j=n;
            else if(tpage[n]<s) i=n;
        }
    }

    return 0;
}

