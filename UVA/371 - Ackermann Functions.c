#include<stdio.h>
int main()
{
    long int x, y, i, j, t, s, num;
    while(scanf("%ld %ld", &x, &y)!= EOF)
    {
        if(x==0 && y==0)break;
        s=0;
        if(x>y){t=x; x=y; y=t;}
        for(i=x; i<=y; i++)
        {
            t=i;
            j=1;
            do
            {
                if(t%2==0){t=t/2;}
                else{t=(3*t)+1;}
                j++;
            }while(t!=1);
            if(j>s){s=j; num=i;}
        }
        printf("Between %ld and %ld, %ld generates the longest sequence of %ld values.\n", x, y, num, s-1);
    }
    return 0;
}
