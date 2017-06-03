#include <stdio.h>

int main()
{
    int n, r, res, i=0;
    while(scanf("%d%d", &r, &n))
    {
        if(r==0 || n==0)break;
        i++;
        res=(r-1)/n;
        if(res>26){printf("Case %d: impossible\n", i);}
        else{printf("Case %d: %d\n", i, res);}
    }
    return 0;
}
