#include <bits/stdc++.h>
using namespace std;
#define SZ 7

long long int n,d=5, m;
struct Matrix
{
    long long int mat[SZ][SZ];
};

Matrix matmul( Matrix A, Matrix B)
{
    Matrix C;
    for(int i=0; i <= d; i++)
    {
        for(int j = 0; j <= d ; j++)
        {
            long long int val = 0ll;
            for(int k = 0; k <= d; k++)
            {
                val += ( A.mat[i][k]*B.mat[k][j] )% m;
            }
            C.mat[i][j] = val;
        }
    }
    return C;
}

Matrix matexpo( Matrix BASE, long long p )
{
    if( p==(long long int)1)return BASE;
    Matrix R = matexpo(BASE,(long long int)p>>(long long int)1);
    R = matmul(R,R);
    if(p&(long long int)1) R = matmul( R,BASE );
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
    int t, a1, a2, b1, b2, c1, c2, q;
    long long int f[3], g[3];
    scanf("%d", &t);
    for(int tc = 1;tc <= t; tc++)
    {
        memset(base.mat,0,sizeof(base.mat));
        scanf("%d %d %d", &a1, &b1, &c1);
        scanf("%d %d %d", &a2, &b2, &c2);
        scanf("%lld %lld %lld", &f[0], &f[1], &f[2]);
        scanf("%lld %lld %lld", &g[0], &g[1], &g[2]);
        scanf("%lld %d", &m, &q);
        printf("Case %d:\n", tc);
        while(q--)
        {
            base.mat[0][0]=0; base.mat[0][1]=1; base.mat[0][2]=0; base.mat[0][3]=0; base.mat[0][4]=0; base.mat[0][5]=0;
            base.mat[1][0]=0; base.mat[1][1]=0; base.mat[1][2]=1; base.mat[1][3]=0; base.mat[1][4]=0; base.mat[1][5]=0;
            base.mat[2][0]=0; base.mat[2][1]=b1; base.mat[2][2]=a1; base.mat[2][3]=c1; base.mat[2][4]=0; base.mat[2][5]=0;
            base.mat[3][0]=0; base.mat[3][1]=0; base.mat[3][2]=0; base.mat[3][3]=0; base.mat[3][4]=1; base.mat[3][5]=0;
            base.mat[4][0]=0; base.mat[4][1]=0; base.mat[4][2]=0; base.mat[4][3]=0; base.mat[4][4]=0; base.mat[4][5]=1;
            base.mat[5][0]=c2; base.mat[5][1]=0; base.mat[5][2]=0; base.mat[5][3]=0; base.mat[5][4]=b2; base.mat[5][5]=a2;
            scanf("%lld", &n);
            if(n<3){printf("%lld %lld\n", f[n]%m, g[n]%m);continue;}
            base=matexpo(base, n-2);
            long long int ff[]={f[0],f[1],f[2],g[0],g[1],g[2]};
            long long int ans= (long long int)0;
            for(int i=0; i<6; i++)
            {
                ans+=(ff[i]*base.mat[2][i])%m;
            }
            printf("%lld ", ans%m);
            ans= (long long int)0;
            for(int i=0; i<6; i++)
            {
                ans+=(ff[i]*base.mat[5][i])%m;
            }
            printf("%lld\n", ans%m);
        }
    }

    return 0;
}
