#include <stdio.h>
#include <string.h>

int main()
{
    char str[100000];
    int i, l;
    while(gets(str))
    {
        l=strlen(str);
        for(i=0; i<l; i++)
        {
            printf("%c", str[i]-7);
        }
        printf("\n");
    }
    return 0;
}
