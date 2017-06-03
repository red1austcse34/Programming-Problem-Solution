#include <stdio.h>

int main()
{
    int t, a, b, i, j, sum;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d%d", &a, &b);
        for(j=a, sum=0; j<=b; j++)
        {
            if(j%2==1){sum=sum+j;}
        }
        printf("Case %d: %d\n", i+1, sum);
    }
    return 0;
}
