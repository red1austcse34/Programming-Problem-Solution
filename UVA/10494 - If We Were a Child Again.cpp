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

void dev(char[], long long int);
long long int rem(char[], long long int);


void dev(char x[], long long int y)
{
    long long int rem=0, i, f=1;
    for(i=0; i<strlen(x); i++)
    {
        rem=x[i]-'0'+rem*10;
        if(rem/y!=0)f=0;
        if(!f)printf("%lld",rem/y);
        rem=rem%y;
    }
    if(f)printf("0");
    printf("\n");

}
long long int rem(char x[], long long int y)
{
    long long int rem=0, i;
    for(i=0; i<strlen(x); i++)
    {
        rem=x[i]-'0'+rem*10;
        rem=rem%y;
    }
    return rem;
}
int main()
{
    long long int y, ans;
    char c, x[100000];
    while(scanf("%s %c %lld", &x, &c, &y)!=EOF)
    {
        if(c=='%')
        {
            ans=rem(x,y);
            printf("%lld\n", ans);
        }
        else
        {
            dev(x,y);
        }
    }
    return 0;
}
