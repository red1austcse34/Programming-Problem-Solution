#include <stdio.h>
#include <math.h>

int main()
{
    int i, x, j;
    while(1)
    {
        scanf("%d", &x);
        if(x==0)break;
        if(x<0){x=x*(-1); printf("-%d = -1", x); j=1;}
        else{printf("%d =", x); j=0;}
        for(i=2; i<=sqrt(x); i++)
        {
            if(x%i==0)
            {
                if(j==1){printf(" x %d", i); x=x/i; i=1;}
                else{printf(" %d x", i); x=x/i; i=1;}
            }
        }
        if(j==1){printf(" x %d\n", x);}
        else{printf(" %d\n", x);}
    }
    return 0;
}
