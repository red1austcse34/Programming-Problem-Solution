#include <bits/stdc++.h>

using namespace std;

int main()
{
    char c;
    int l, w, t;
    cin >> t;
    while(t--)
    {
        cin >> c >>  w >> l;
        if(c=='Q' || c=='r')printf("%d\n", min(w,l));
        else if(c=='K')printf("%d\n", ((w+1)/2)*((l+1)/2));
        else printf("%d", ((w*l)+1)/2);
    }
    return 0;
}
