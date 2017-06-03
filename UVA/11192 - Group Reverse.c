#include <stdio.h>
#include <string.h>

int main()
{
    int d, l, x, i, j;
    char str[100];
    while(scanf("%d", &d))
    {
        if(d==0)break;
        scanf("%s", str);
        l=strlen(str);
        x=l/d;
        for(i=1; i<=l; i++)
        {
            if(i%x==0)
            {
                for(j=i; j>i-x; j--)
                {
                    printf("%c", str[j-1]);
                }
            }
        }
        printf("\n");
    }
    return 0;
}
