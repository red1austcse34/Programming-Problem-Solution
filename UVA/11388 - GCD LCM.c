#include <stdio.h>

int main()
{
    int t, a, b, i;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d%d", &a, &b);
        if(b%a==0){printf("%d %d\n", a, b);}
        else{printf("-1\n");}
    }
    return 0;
}

