#include <stdio.h>

int main()
{
    int x, y, t, a, i, ans;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d%d", &x, &y);
        a=x*y;
        if(x==1){ans=y;}
        else if(y==1){ans=x;}
        else if(x==2)
        {
            ans=(y/4)*4;
            if(y%4==1){ans=ans+2;}
            else if(y%4>1){ans=ans+4;}
        }
        else if(y==2)
        {
            ans=(x/4)*4;
            if(x%4==1){ans=ans+2;}
            else if(x%4>1){ans=ans+4;}
        }
        else{ans=((x*y)+1)/2;}
        printf("Case %d: %d\n", i+1, ans);
    }
    return 0;
}
