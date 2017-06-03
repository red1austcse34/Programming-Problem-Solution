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

char sen[110][110];

int main()
{

    int ms=0, ml=0;

    for(int i=0; i<110; i++)
    {
        for(int j=0; j<110; j++)
        {
            sen[i][j]=' ';
        }
    }
    while(gets(sen[ms]))
    {
        int l=strlen(sen[ms]);
        sen[ms][l]=' ';
        ml=max( ml, l);
        ms++;
    }
    for(int i=0; i<ml; i++)
        {
            for(int j=ms-1; j>=0; j--)
            {
                printf("%c", sen[j][i]);
            }
            printf("\n");
        }
    return 0;
}

