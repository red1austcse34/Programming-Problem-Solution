#include <stdio.h>
#include <string.h>

int a[1010];

int sod(int);
int sod(int x)
{
    int i, sum;
    if(x==1)return 1;
    for(i=2, sum=1; i*i<=x; i++)
    {
        if(x%i==0)
        {
            if(i*i==x){sum=sum+i;}
            else{sum=sum+(i+x/i);}
        }
    }
    return sum+x;
}

int main()
{
    int i, x;
    memset(a, -1, sizeof(a));
    for(i=1; i<=1000; i++)
    {
        x=sod(i);
        if(x<=1000){a[x]=i;}
    }
    i=1;
    while(scanf("%d", &x))
    {
        if(x==0)break;
        printf("Case %d: %d\n", i++, a[x]);
    }
    return 0;
}
