#include <bits/stdc++.h>

using namespace std;

int ar[100100];

int pa(int x)
{
    if(x==ar[x])return x;
    return pa(ar[x]);
}

void form(int x, int y)
{
    ar[pa(x)] = pa(y);
}


bool isf(int x, int y)
{
    if(pa(ar[x])==pa(ar[y]))return true;
    return false;
}

int main()
{
    int n, x, y, i, ans;
    while(scanf("%d", &x)!=EOF)
    {
        for(i=1; i<100001; i++)ar[i]=i;
        ans=0;
        while(scanf("%d", &y))
        {
            if(isf(x,y))ans++;
            else form(x,y);
            scanf("%d", &x);
            if(x==-1)break;
        }
        printf("%d\n", ans);
    }
    return 0;
}
