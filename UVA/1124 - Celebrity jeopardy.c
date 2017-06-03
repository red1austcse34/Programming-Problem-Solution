#include <stdio.h>

int main()
{
    char str[100];
    while(gets(str))
    {
        printf("%s\n", str);
    }
    return 0;
}
