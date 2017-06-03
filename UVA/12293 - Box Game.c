#include <stdio.h>

int main()
{
    long int x, i;
    while(scanf("%ld", &x))
    {
        if(x==0)break;
        for(i=1; i<x; i=i*2+1){}
        if(i>x){printf("Alice\n");}
        else{printf("Bob\n");}
    }
    return 0;
}
