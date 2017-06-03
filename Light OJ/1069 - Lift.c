#include <stdio.h>

int main()
{
    int t, i, a ,b, r;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
     scanf("%d%d", &a, &b);
     if(a>b)
     {
        r=(4*(a-b))+(4*a)+19;
        printf("Case %d: %d\n", i+1, r);
     }
     else
     {
        r=(4*(b-a))+(4*a)+19;
        printf("Case %d: %d\n", i+1, r);
     }
    }
return 0;
}
