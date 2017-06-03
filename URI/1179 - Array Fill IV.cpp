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
    int a[20], i, j, n, k;

    n=15;
    for(i=0; i<15; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0, j=0; j<5; i++)
    {
        if(a[i]%2==0)
        {
            printf("par[%d] = %d\n", j, a[i]);
            j++;
        }
    }
    for(k=0, j=0; j<5; k++)
    {
        if(abs(a[k]%2)==1)
        {
            printf("impar[%d] = %d\n", j, a[k]);
            j++;
        }
    }
    for(j=0; k<15; k++)
    {
        if(abs(a[k]%2)==1)
        {
            printf("impar[%d] = %d\n", j, a[k]);
            j++;
        }
    }
    for(j=0; i<15; i++)
    {
        if(a[i]%2==0)
        {
            printf("par[%d] = %d\n", j, a[i]);
            j++;
        }
    }
    return 0;
}
