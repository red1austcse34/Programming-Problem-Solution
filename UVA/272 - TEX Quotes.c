#include <stdio.h>

int main()
{
    char str[100000];
    long int i, j;
    while(gets(str))
    {
        for(i=0, j=0; str[i]!='\0'; i++)
        {
            if(str[i]=='"')
            {
                j++;
                if(j%2==1){printf("``");}
                else{printf("''");}
            }
            else
            {
                printf("%c", str[i]);
            }
        }
    }
    return 0;
}
