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
    char c;
    int t;
    scanf("%d\n", &t);
    while(scanf("%c", &c)!=EOF)
    {
        if(c=='0')printf("O");
        else if(c=='1')printf("I");
        else if(c=='2')printf("Z");
        else if(c=='3')printf("E");
        else if(c=='4')printf("A");
        else if(c=='5')printf("S");
        else if(c=='6')printf("G");
        else if(c=='7')printf("T");
        else if(c=='8')printf("B");
        else if(c=='9')printf("P");
        else printf("%c", c);
    }
    return 0;
}
