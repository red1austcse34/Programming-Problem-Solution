#include <stdio.h>
#include <math.h>
int prime(int);
int prime(int a)
{
    int i;
    for(i=2; i<=sqrt(a); i++)
    {
        if(a%i==0){return 0;}
    }
    return 1;
}


int main()
{
    int x, a, i, y, z;
    while(1)
    {
        scanf("%d", &x);
        if(x==0)break;
        for(y=0, z=0, i=3;i<=x/2; i=i+2)
        {
            y=prime(i);
            z=prime(x-i);
            if(y==1 && z==1){break;}
        }
        if(i>x/2){printf("Goldbach's conjecture is wrong\n");}
        else{printf("%d = %d + %d\n", x, i, x-i);}

    }
    return 0;
}
