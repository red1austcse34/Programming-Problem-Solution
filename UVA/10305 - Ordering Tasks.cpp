#include <bits/stdc++.h>

using namespace std;

int vis[105], t, ar[105];
vector <int> conNode[105];
stack <int> ans;

void topsort(int x)
{
    vis[x]=1;
    for(int i=0; i<conNode[x].size(); i++)
    {
        if(!vis[conNode[x][i]])
        {
            topsort(conNode[x][i]);
        }
    }
    ans.push(x);
}

int main()
{
    int n, m, x, y, i;
    while(cin >> n >> m && (n || m))
    {
        while(m--)
        {
            cin >> x >> y;
            conNode[x].push_back(y);
        }
        for(i=1; i<=n; i++)
        {
            if(!vis[i])topsort(i);
        }
        for(i=0; i<n; i++)
        {
            cout << ans.top();
            if(i<n-1)cout << " ";
            ans.pop();
        }
        cout << endl;
        memset(vis, 0, sizeof(vis));
        for(i=1; i<=n; i++)conNode[i].clear();
    }
    return 0;
}
