#include <stdio.h>
int GCD(int, int);
int GCD(int a, int b)
{
    int t;
    while (a!=0)
    {
        t=a;
        a=b%a;
        b=t;
    }
    return b;
}

int main()
{
    int N, G, i, j;
    while(scanf("%d", &N))
    {
        if(N==0)break;
        G=0;
        for(i=1;i<N;i++)
        {
            for(j=i+1;j<=N;j++)
            {
                G+=GCD(i,j);
            }
        }
        printf("%d\n", G);
    }
    return 0;
}
