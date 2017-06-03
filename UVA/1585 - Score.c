#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, k, t, x, sum;
    char str[100];
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%s", str);
        x=strlen(str);
        for(j=0, k=0, sum=0; j<x; j++)
        {
            if(str[j]=='O'){k++;}
            else if(str[j]=='X'){k=0;}
            sum=sum+k;
        }
        printf("%d\n", sum);
    }
    return 0;
}
