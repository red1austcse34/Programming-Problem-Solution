#include <stdio.h>

int main()
{
    long int x;
    while(scanf("%ld", &x))
    {
        if(x<0)break;
        if(x==1){printf("0%%\n");}
        else{printf("%ld%%\n", x*100/4);}
    }
    return 0;
}
