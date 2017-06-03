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

int num[300] ,i, j, k, c, limit, sum_of_divi=0;
int main()
{
    c=0;

    while((scanf(" %d", &num[c]))==1)
    {
        if(num[c]==0)
            break;
        c++;
    }
    printf("PERFECTION OUTPUT\n");

    for(i=0; i<c; i++)
    {
        limit=num[i]/2;
        for(k=1, sum_of_divi=0; k<=limit; k++)
        {
            if(num[i]%k==0)
            {
                    sum_of_divi+=k;
            }
        }
        if(sum_of_divi==num[i])
            printf("%5d  PERFECT\n", num[i]);
        else if(sum_of_divi>num[i])
            printf("%5d  ABUNDANT\n",num[i]);
        else if(sum_of_divi<num[i])
            printf("%5d  DEFICIENT\n",num[i]);
    }
    printf("END OF OUTPUT\n");
}
