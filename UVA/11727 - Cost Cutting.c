#include <stdio.h>

int main()
{
    int a, b, c, t, i;

    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d%d%d", &a, &b, &c);
        if(a<1000||b<1000||c<1000||a>10000||b>10000||b>10000)break;
        if((a<b&&a>c)||(a<c&&a>b)){printf("Case %d: %d\n",i+1,a);}
        else if((b<a&&b>c)||(b<c&&b>a)){printf("Case %d: %d\n",i+1,b);}
        else if((c<a&&c>b)||(c<b&&c>a)){printf("Case %d: %d\n",i+1,c);}
    }
    return 0;
}

