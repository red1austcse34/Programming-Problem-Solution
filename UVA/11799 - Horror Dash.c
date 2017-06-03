#include <stdio.h>

int main()
{
    int t, i, n, j, x, y;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d", &n);
        for(j=0, y=0; j<n; j++)
        {
            scanf("%d", &x);
            if(x>y)y=x;
        }
        printf("Case %d: %d\n", i+1, y);
    }
    return 0;
}
