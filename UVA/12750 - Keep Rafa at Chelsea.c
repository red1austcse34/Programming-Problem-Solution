#include <stdio.h>

int main()
{
    int t, x, i, j, r, k;
    char ch[1002];
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d", &x);

        for(j=0; j<x; j++)
        {
            scanf(" %c", &ch[j]);
        }
        for(j=0, r=0; j<x-2; j++)
        {
            if(ch[j]!='W' && ch[j+1]!='W' && ch[j+2]!='W'){r=0; break;}
            r++;
        }
        if(r==x-2){printf("Case %d: Yay! Mighty Rafa persists!\n", i+1);}
        else{printf("Case %d: %d\n", i+1, j+3);}
    }
    return 0;
}

