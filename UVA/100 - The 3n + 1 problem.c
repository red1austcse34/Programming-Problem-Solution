#include<stdio.h>
int main()
{
    long int x,y,i,j,t,s,k;
    while(scanf("%ld %ld", &x, &y)!= EOF)
    {
        s=0;
        if(x>y){t=x; x=y; y=t; k=1;}
        for(i=x; i<=y; i++)
        {
            t=i;
            for(j=1;t!=1;j++)
            {
                if(t%2==0){t=t/2;}
                else{t=(3*t)+1;}
            }
            if(j>s){s=j;}
        }
        if(k==1){t=x; x=y; y=t; k=0;}
        printf("%ld %ld %ld\n", x, y, s);
    }
    return 0;
}
