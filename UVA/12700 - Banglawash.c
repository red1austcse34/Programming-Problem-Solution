#include <stdio.h>

int main()
{
    char str[11];
    int test, n, i, j, b, w, a, t;
    scanf("%d", &test);
    for(i=0; i<test; i++)
    {
        scanf("%d", &n);
        scanf("%s", str);
        for(j=0, w=0, b=0, a=0, t=0; j<n; j++)
        {
            if(str[j]=='B'){b++;}
            else if(str[j]=='W'){w++;}
            else if(str[j]=='A'){a++;}
            else if(str[j]=='T'){t++;}
        }
        if(a==n){printf("Case %d: ABANDONED\n", i+1);}
        else
        {
            n=n-a;
            if(b==n){printf("Case %d: BANGLAWASH\n", i+1);}
            else if(w==n){printf("Case %d: WHITEWASH\n", i+1);}
            else if(b==w){printf("Case %d: DRAW %d %d\n", i+1, b, t);}
            else if(b>w){printf("Case %d: BANGLADESH %d - %d\n", i+1, b, w);}
            else if(w>b){printf("Case %d: WWW %d - %d\n", i+1, w, b);}
        }

    }
    return 0;
}
