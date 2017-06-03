#include <bits/stdc++.h>

using namespace std;

char mp[10][10];

int main()
{
    int t, i, j, k, f, l, d;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        f=0;
        for(j=0; j<5; j++)
        {
            scanf("%s", &mp[j]);
        }
        d=0;
        for(j=0; j<5; j++)
        {
            for(k=0; k<5; k++)
            {
                if(mp[j][k]=='>'){l=k;d=1;break;}
                if(mp[j][k]=='<'){l=k;d=2;break;}
            }
            if(d)break;
        }
        if(d==1)
        {
            for(j=l-1; j>=0; j--)
            {
                if(mp[0][j]=='|'){f=1; break;}
            }
        }
        else
        {
            for(j=l+1; j<5; j++)
            {
                if(mp[0][j]=='|'){f=1; break;}
            }
        }
        if(f)printf("Case %d: No Ball\n", i+1);
        else printf("Case %d: Thik Ball\n", i+1);
    }
    return 0;
}
