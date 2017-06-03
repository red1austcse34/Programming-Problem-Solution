#include <stdio.h>
#include <string.h>

int main()
{
    char str[201], c;
    int i, j, l, t, x;

    scanf("%d", &t);
    scanf("\n");
    for(i=0; i<t; i++)
    {
        gets(str);
        l=strlen(str);
        printf("Case %d: ", i+1);
        for(j=0; j<l; j++)
        {
            if(str[j]>='A' && str[j]<='Z'){c=str[j];}
            else
            {
                x=str[j]-48;
                while(str[j+1]>= '0' && str[j+1]<='9')
                {
                    x=(x*10)+(str[j+1]-48);
                    j++;
                }
                while(x--)
                {
                    printf("%c", c);
                }
            }
        }
        printf("\n");
    }
    return 0;
}
