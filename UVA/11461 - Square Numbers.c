#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, i, r, j;

    while(scanf("%d %d", &a, &b))
    {
        if(a==0 && b==0)break;
        for(i=a, j=0; i<=b; i++)
        {
            r=sqrt(i);
            if(r*r==i)j++;
        }
        printf("%d\n", j);
    }
    return 0;
}
