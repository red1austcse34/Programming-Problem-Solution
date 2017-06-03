#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define SZ 5

long long n,d=1, mod;
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
                val += ( A.mat[i][k]*B.mat[k][j] )% mod;
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
    int t, a, b, m;
    scanf("%d", &t);
    for(int tc = 1;tc <= t; tc++)
    {
        memset(base.mat,0,sizeof(base.mat));
        scanf("%d %d %lld %d", &a, &b, &n, &m);
        base.mat[0][0]=1; base.mat[0][1]=1;
        base.mat[1][0]=1; base.mat[1][1]=0;
        if(n<=1)
        {
            printf("Case %d: 0\n",tc, n);
            continue;
        }
        mod=ceil(pow(10,m));
        base = matexpo(base,n-1);
        ll ans = (ll)0;
        ll f[] = {b,a};

        for(int i = 0; i <= d; i++)
            ans=(ans+(base.mat[0][i]*f[i]))%mod;

        printf("Case %d: %lld\n", tc, ans%mod);
    }

    return 0;
}
