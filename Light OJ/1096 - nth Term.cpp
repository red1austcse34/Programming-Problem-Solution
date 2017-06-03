#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define SZ 5

long long n,d=3;
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
    int t, a, b, c;
    scanf("%d", &t);
    for(int tc = 1;tc <= t; tc++)
    {
        memset(base.mat,0,sizeof(base.mat));
        scanf("%lld %d %d %d", &n, &a, &b, &c);
        base.mat[0][0]=a; base.mat[0][1]=0; base.mat[0][2]=b; base.mat[0][3]=1;
        base.mat[1][0]=1; base.mat[1][1]=0; base.mat[1][2]=0; base.mat[1][3]=0;
        base.mat[2][0]=0; base.mat[2][1]=1; base.mat[2][2]=0; base.mat[2][3]=0;
        base.mat[3][0]=0; base.mat[3][1]=0; base.mat[3][2]=0; base.mat[3][3]=1;
        if(n<=2)
        {
            printf("Case %d: 0\n",tc, n);
            continue;
        }

        base = matexpo(base,n-3);
        ll ans = (ll)0;
        ll f[] = {c,0,0,c};

        for(int i = 0; i <= d; i++)
            ans=(ans+(base.mat[0][i]*f[i]))%10007;

        printf("Case %d: %lld\n", tc, ans%10007);
    }

    return 0;
}
