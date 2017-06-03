#include <bits/stdc++.h>

using namespace std;

int col[10000];

int main()
{
    int n, i, l, a, b, f;
    while(cin>>n && n)
    {
        vector <int> ed[10000];
        for(i=0; i<n; i++)
        {
            col[i]=0;
        }
        cin >> l;
        for(i=0, f=0; i<l; i++)
        {
            cin >> a >> b;
            ed[a].push_back(b);
            ed[b].push_back(a);
        }
        queue <int> q;
        col[0]=1;
        q.push(0);
        while(!q.empty())
        {
            a=q.front();
            q.pop();
            b=ed[a].size();
            for(i=0; i<b; i++)
            {
                if(!col[ed[a][i]])
                {
                    if(col[a]==1)col[ed[a][i]]=2;
                    else col[ed[a][i]]=1;
                    q.push(ed[a][i]);
                }
                else if(col[ed[a][i]]==col[a])
                {
                    f=1; break;
                }
            }
            if(f)break;
        }
        if(f)printf("NOT BICOLORABLE.\n");
        else printf("BICOLORABLE.\n");
    }
    return 0;
}
