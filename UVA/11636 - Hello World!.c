#include <stdio.h>

int main()
{
    int i, j, k, l;
    for(i=1; i<=2000; i++)
    {
        scanf("%d", &l);
        if(l<0)
        {
            break;
        }
        for(j=1, k=1; k<l; j++)
            {
                k=k*2;
            }

        printf("Case %d: %d\n", i, j-1);

    }
    return 0;
}
