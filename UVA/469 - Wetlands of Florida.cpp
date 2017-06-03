#include <bits/stdc++.h>

using namespace std;

char mp[105][105], in[105], n , m;
int dx[]={1,1,0,-1,-1,-1,0,1}, ans;
int dy[]={0,-1,-1,-1,0,1,1,1};
int vis[105][105];

void dfs(int x, int y)
{
    int i;
    vis[x][y]=1;
    //printf("Asche\n");
    //vis[x][y]=1;
    ans++;
    for(i=0; i<8; i++)
    {
        //printf("Asche\n");
        int xx=x+dx[i];
        int yy=y+dy[i];
        if(xx>=0 && yy>=0 && xx<m && yy<n && mp[xx][yy]=='W' && !vis[xx][yy])dfs(xx,yy);
    }
}

int main()
{
    int i, j, r, c, t, f=0;
    cin >> t;
    scanf("\n\n");
    while(t--)
    {
        n=0;
        if(f)cout << "\n";
        f=1;
        while(gets(in) && strlen(in))
        {
            if(in[0]=='L' || in[0]=='W')
            {
                strcpy(mp[n], in);
                n++;
                m=strlen(in);
            }
            else
            {
                sscanf(in, "%d %d", &r, &c);
                ans=0;
                //cout << r << " " << c;
                dfs(r-1, c-1);
                cout << ans << endl;
                memset(vis, 0, sizeof(vis));
            }
        }
    }
    return 0;
}
