#include <bits/stdc++.h>

using namespace std;

int p[1000010];

int main()
{
    long long int n, i, j, k, x, y, z, a, b, c, ans1, ans2;
    while(scanf("%lld", &n)!=EOF)
    {
        ans1=0; ans2=0;
        for(i=1; i*i<=n; i++)
        {
            for(j=i+1; j*j<=n; j+=2)
            {
                if(__gcd(i,j)==1)
                {
                    a=j*j-i*i;
                    b=2*i*j;
                    c=i*i+j*j;
                    if(c>n)break;
                    x=a; y=b; z=c;
                    while(z<=n)
                    {
                        p[x]=1; p[y]=1; p[z]=1;
                        x+=a; y+=b; z+=c;
                    }
                    ans1++;
                }
            }
        }
        for(i=1; i<=n;i++)
        {
            if(!p[i])ans2++;
            p[i]=0;
        }
        printf("%lld %lld\n", ans1, ans2);
    }
    return 0;
}
