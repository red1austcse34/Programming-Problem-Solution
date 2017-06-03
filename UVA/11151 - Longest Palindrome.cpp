#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;

int ar[1010][1010];
char str[1010];

int lp(int l, int r)
{
    if(l==r)return 1;
    if(l+1==r)
    {
        if(str[l]==str[r])return 2;
        else return 1;
    }
    if(ar[l][r]!=(-1))return ar[l][r];
    if(str[l]==str[r])return ar[l][r]=2+lp(l+1, r-1);
    else return ar[l][r]=max(lp(l+1, r), lp(l, r-1));
}

int main()
{
    int t, ans, l;
    scanf("%d", &t);
    getc(stdin);
    while(t--)
    {
        gets(str);
        l=strlen(str);
        if(l==0)printf("0\n");
        else
        {
            memset(ar, -1, sizeof(ar));
            ans=lp(0, l-1);
            printf("%d\n", ans);
        }
    }
    return 0;
}
