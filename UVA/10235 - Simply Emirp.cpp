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

bool prime [1000005];

int main ()
{
    for ( int i = 2; i < 1000005; i++ )
        prime [i] = true;

    for ( int i = 2; i < 1000004; i++ ) {
        for ( int j = i * 2; j < 1000004; j += i )
            prime [j] = false;
    }

    int n;

    while ( scanf ("%d", &n) != EOF ) {

        if ( prime [n] == false )
            printf ("%d is not prime.\n", n);

        else {
            char reverse [10];
            int i = 0;
            int save_n = n;

            while ( n ) {
                reverse [i++] = (n % 10) + '0';
                n /= 10;
            }

            reverse [i] = 0;

            n = atoi (reverse);

            if ( prime [n] == true && n != save_n )
                printf ("%d is emirp.\n", save_n);

            else
                printf ("%d is prime.\n", save_n);
        }
    }

    return 0;
}
