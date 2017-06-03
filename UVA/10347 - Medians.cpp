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
    double m1,m2,m3;
    while(scanf("%lf %lf %lf",&m1,&m2,&m3)!=EOF)
    {
        double med=(m1+m2+m3)/2.0;
        double area=(4/3.0)*sqrt(med*(med-m1)*(med-m2)*(med-m3));
        if(!(area>0))area=-1.0;
        printf("%.3lf\n",area);
    }
    return 0;
}
