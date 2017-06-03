#include <stdio.h>

int main()
{
    int t, x, y, z, a, b, r, i;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d%d%d", &x, &y, &z);
        a=x+(x-y);
        b=x+y;
        r=(z*a)/b;
        printf("%d\n", r);
    }
    return 0;
}
