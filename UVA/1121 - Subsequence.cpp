#include<bits/stdc++.h>

using namespace std;

long long ar[100010];

int main()
{
    //freopen("out.txt", "w", stdout);
    long long n, s, i, j, ans, mx, sum;
    while(cin >> n >> s)
    {
        for(i=0; i<n; i++)cin >> ar[i];
        j=0;
        ans=100010;
        sum=0;
        for(i=0; i<n; i++)
        {
            sum+=ar[i];
            if(sum>=s)
            {
                while(sum-ar[j]>=s)
                {
                    sum-=ar[j];
                    j++;
                }
                mx=i-j+1;
                if(mx<ans)
                {
                    ans=mx;
                }
            }
        }
        if(ans==100010)cout << "0\n";
        else cout << ans << endl;
    }
    return 0;
}


