#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    int i, j, l, k;

    while(gets(str))
    {
        l=strlen(str);
        for(i=0, j=0; i<l; i++)
        {
            if(str[i]==' ')
            {
                for(k=i-1; k>=j; k--)
                {
                    printf("%c", str[k]);
                }
                printf(" ");
                j=i+1;
            }
        }
        for(i=l-1; i>=j; i--)
        {
            printf("%c", str[i]);
        }
        printf("\n");
    }
    return 0;
}
