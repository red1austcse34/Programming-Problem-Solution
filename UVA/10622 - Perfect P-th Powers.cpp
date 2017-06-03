#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("out.txt", "w", stdout);
    long long n, i, ans, h, l, m, neg=0;
    while(cin >> n && n)
    {
        if(n<0)
        {
            n=abs(n);
            neg=1;
        }
        for(ans=32; ans>1; ans--)
        {
            l=2; h=n;
            while(l<=h)
            {
                //if(ans==2)cout << l << " " << h << endl;
                m=(l+h)/2;
                if(ceil(pow(m,ans))<n)l=m+1;
                else if(ceil(pow(m,ans))>n)h=m-1;
                else break;
            }
            if(ceil(pow(m,ans))==n)
            {
                if(neg==1 && ans%2==0)continue;
                break;
            }
        }
        cout << ans << endl;
        neg=0;
    }
    return 0;
}
