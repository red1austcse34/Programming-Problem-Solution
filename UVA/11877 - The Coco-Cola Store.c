#include <stdio.h>

int main()
{
    int x;
    while(scanf("%d", &x))
    {
        if(x==0)break;
        printf("%d\n", x/2);
    }
    return 0;
}

