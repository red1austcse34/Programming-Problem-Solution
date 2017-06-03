#include <stdio.h>

int main()
{
    int n, x, y, ans;

    while(scanf("%d", &n))
    {
        ans=0;
        if(n==0)break;
        for(x=2; x<n; x++)
        {
            for(y=1; y<x; y++)
            {
                if((x*x*x)-(y*y*y)==n){ans++; break;}
            }
            if(ans)break;
        }
        if(ans){printf("%d %d\n", x, y);}
        else{printf("No solution\n");}
    }
    return 0;
}
