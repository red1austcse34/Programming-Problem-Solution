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
    int testCases;
    scanf ("%d", &testCases);
    int cases = 0;

    char urls [10 + 2] [100 + 10];
    int rels [10 + 2];

    while ( testCases-- ) {

        int maxi = -1;

        for ( int i = 0; i < 10; i++ ) {
            scanf ("%s %d", urls [i], &rels [i]);
            maxi = max (maxi, rels [i]);
        }

        printf ("Case #%d:\n", ++cases);

        for ( int i = 0; i < 10; i++ ) {
            if ( maxi == rels [i] ) printf ("%s\n", urls [i]);
        }
    }
    return 0;
}
