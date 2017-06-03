#include <stdio.h>
#include <string.h>

int main()
{
    char str[101];
    int i, j, l, rem, sum;

    while(gets(str))
    {
        if(str[0]=='0')break;
        l=strlen(str);
        for(i=0, rem=0, sum=0; i<l; i++)
        {
            sum=rem*10+(str[i]-48);
            rem=sum%17;
        }
        if(rem==0){printf("1\n");}
        else{printf("0\n");}
    }
    return 0;
}
