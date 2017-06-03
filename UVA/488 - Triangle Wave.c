#include <stdio.h>

int main()
{
    int a, b, t, i, j, k, l;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d%d", &a, &b);
        for(l=0; l<b; l++)
        {
            if(a>9)break;
            for(j=0; j<a; j++)
            {
                for(k=0; k<j+1; k++)
                {
                printf("%d", j+1);
                }
                printf("\n");
            }
            for(j=1; j<a; j++)
            {
                for(k=a; k>j; k--)
                {
                printf("%d", a-j);
                }
                printf("\n");
            }
            if(l!=(b-1)){printf("\n");}
        }
    if(i!=(t-1)){printf("\n");}
    }
    return 0;

}
