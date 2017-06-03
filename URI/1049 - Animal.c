#include <stdio.h>

int main()
{
    char str[100];
    gets(str);
    if(str[0]=='v')
    {
        gets(str);
        if(str[0]=='a')
        {
            gets(str);
            if(str[0]=='c'){printf("aguia\n");}
            else{printf("pomba\n");}
        }
        else
        {
            gets(str);
            if(str[0]=='o'){printf("homem\n");}
            else{printf("vaca\n");}
        }
    }
    else
    {
        gets(str);
        if(str[0]=='i')
        {
            gets(str);
            if(str[2]=='m'){printf("pulga\n");}
            else{printf("lagarta\n");}
        }
        else
        {
            gets(str);
            if(str[0]=='h'){printf("sanguessuga\n");}
            else{printf("minhoca\n");}
        }
    }
    return 0;
}
