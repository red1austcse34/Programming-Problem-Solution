#include <stdio.h>

int main()
{
    int x, y;
    while(scanf("%d", &x)!= EOF)
    {
        y=x+(x/2);
        printf("%d\n", y);
    }
    return 0;
}

