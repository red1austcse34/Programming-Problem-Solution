#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define SZ 5

long long n,d=2;
struct Matrix
{
    ll mat[SZ][SZ];
};

Matrix matmul( Matrix A, Matrix B)
{
    Matrix C;
    for(int i=0; i <= d; i++)
    {
        for(int j = 0; j <= d ; j++)
        {
            ll val = 0ll;
            for(int k = 0; k <= d; k++)
            {
                val += ( A.mat[i][k]*B.mat[k][j] )% 10007;
            }
            C.mat[i][j] = val;
        }
    }
    return C;
}

Matrix matexpo( Matrix BASE, long long p )
{
    if( p==1ll)return BASE;
    Matrix R = matexpo(BASE,(ll)p>>1ll);
    R = matmul(R,R);
    if(p&1ll) R = matmul( R,BASE );
    return R;
}

void print( Matrix ret )
{
    for(int i = 0; i <= d; i++)
    {
        for(int j = 0; j <= d; j++)
            cout<< ret.mat[i][j] << " ";
        cout<<endl;
    }
}

int main()
{
    Matrix base;
    int t;
    scanf("%d", &t);
    for(int tc = 1;tc <= t; tc++)
    {
        memset(base.mat,0,sizeof(base.mat));
        scanf("%lld", &n);
        base.mat[0][0]=2; base.mat[0][1]=0; base.mat[0][2]=1;
        base.mat[1][0]=1; base.mat[1][1]=0; base.mat[1][2]=0;
        base.mat[2][0]=0; base.mat[2][1]=1; base.mat[2][2]=0;
        if(n<=3)
        {
            if(n<3)printf("Case %d: %lld\n",tc, n);
            else printf("Case %d: 5\n",tc);
            continue;
        }

        base = matexpo(base,n-3);
        ll ans = (ll)0;
        ll f[] = {5,2,1};

        for(int i = 0; i <= d; i++)
            ans=(ans+(base.mat[0][i]*f[i]))%10007;

        printf("Case %d: %lld\n", tc, ans%10007);
    }

    return 0;
}
