#include <stdio.h>
int digitsum(int);
int digitsum(int x)
{
    int sum=x;
    while(x)
    {
        sum=sum+(x%10);
        x=x/10;
    }
    return sum;
}

int main()
{
    int x, i, j, t;

    scanf("%d", &t);

    for(i=0; i<t; i++)
    {
        scanf("%d", &x);
        for(j=x-46; j<x; j++)
        {
            if(digitsum(j)==x)break;
        }
        if(j==x){printf("0\n");}
        else{printf("%d\n", j);}
    }
    return 0;
}
