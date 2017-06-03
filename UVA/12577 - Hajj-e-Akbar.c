#include <stdio.h>

int main()
{
    int i, x;
    char str[5];
    for(i=1; i>0; i++)
    {
        scanf("%s", str);
        if(str[0]== '*'){break;}
        else if(str[0]== 'H'){x=0;}
        else if(str[0]== 'U'){x=1;}
        if(x==0){printf("Case %d: Hajj-e-Akbar\n", i);}
        else{printf("Case %d: Hajj-e-Asghar\n", i);}
    }
    return 0;
}
