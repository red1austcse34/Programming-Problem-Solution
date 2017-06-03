#include <stdio.h>

int main()
{
    int t, i;
    char str[5];

    scanf("%d", &t);

    for(i=0; i<t; i++)
    {
        scanf("%s", str);
        if(str[0]=='o'||str[1]=='n'){printf("1\n");}
        else if(str[1]=='w'||str[2]=='o'){printf("2\n");}
        else if(str[3]=='e'||str[4]=='e'){printf("3\n");}
    }
    return 0;
}
