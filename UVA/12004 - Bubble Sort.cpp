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

typedef long long LL;
LL gcd(LL a, LL b){ return a ? gcd(b % a, a) : b; }
struct frac {
    LL num, den;
    void show(){
        if(den != 1) printf("%lld/%lld\n", num, den);
        else printf("%lld\n", num);
    }
    void simpler(){
        int g = gcd(num, den);
        num /= g; den /= g;
    }
};
int main(void){
    int t; scanf("%d", &t);
    long long n;
    for(int c = 1; t-- && scanf("%lld", &n); ++c){
        printf("Case %d: ", c);
        frac f = {n*(n - 1), 4};
        f.simpler();
        f.show();
    }
}
