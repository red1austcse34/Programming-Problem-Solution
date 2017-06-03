#include <stdio.h>

int main()
{
    int i;
    char str[14];
    i=1;
    while(1)
    {
        gets(str);
        if(str[0]=='#')break;
        else if(str[0]== 'H' && str[1]== 'E' && str[2]== 'L' && str[3]== 'L' && str[4]== 'O' && str[5]== '\0'){printf("Case %d: ENGLISH\n", i);}
        else if(str[0]== 'H' && str[1]== 'O' && str[2]== 'L' && str[3]== 'A' && str[4]== '\0'){printf("Case %d: SPANISH\n", i);}
        else if(str[0]== 'H' && str[1]== 'A' && str[2]== 'L' && str[3]== 'L' && str[4]== 'O' && str[5]== '\0'){printf("Case %d: GERMAN\n", i);}
        else if(str[0]== 'B' && str[1]== 'O' && str[2]== 'N' && str[3]== 'J' && str[4]== 'O' && str[5]== 'U' && str[6]== 'R' && str[7]== '\0'){printf("Case %d: FRENCH\n", i);}
        else if(str[0]== 'C' && str[1]== 'I' && str[2]== 'A' && str[3]== 'O' && str[4]== '\0'){printf("Case %d: ITALIAN\n", i);}
        else if(str[0]== 'Z' && str[1]== 'D' && str[2]== 'R' && str[3]== 'A' && str[4]== 'V' && str[5]== 'S' && str[6]== 'T' && str[7]== 'V' && str[8]== 'U' && str[9]== 'J' && str[10]== 'T' && str[11]== 'E' && str[12]== '\0'){printf("Case %d: RUSSIAN\n", i);}
        else{printf("Case %d: UNKNOWN\n", i);}
        i++;
    }
    return 0;
}
