#include <stdio.h>

int fib(int);
int fib(int x)
{
    int i, y=0, sum, z=1;
    for(i=0, sum=0; i<x+1; i++)
    {
        sum=z+y;
        z=y;
        y=sum;
    }
    return y;
}

int main()
{
    int n;
    while(scanf("%d", &n))
    {
        if(n==0)break;
        else if(n==1){printf("1\n");}
        else if(n==2){printf("2\n");}
        else if(n==3){printf("3\n");}
        else{printf("%d\n", fib(n));}
    }
    return 0;
}
