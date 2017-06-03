#include <stdio.h>
int oronary(int);
int oronary(int x)
{
    int i, sum=0;
    while(x!=0)
    {
        i=x%2;
        sum=sum+i;
        x=x/2;
    }
    return sum;
}

int main()
{
    int t, i, y, z;
    int x, j;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d", &x);
        y= oronary(x);
        for(j=x+1; 1; j++)
        {
            z= oronary(j);
            if(z==y)break;
        }
        printf("Case %d: %d\n", i+1, j);
    }
    return 0;
}
