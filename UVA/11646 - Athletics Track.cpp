#include <bits/stdc++.h>

using namespace std;

int ar[100100];

int main()
{
    int t=0;
    double l, w, ang, r;
    while(scanf("%lf : %lf", &l, &w)!=EOF)
    {
        ang=atan(w/l);
        r=400/(2*l+4*ang*sqrt((l*l+w*w)/4));
        printf("Case %d: %.10lf %10lf\n", ++t, l*r, w*r);
    }
    return 0;
}
