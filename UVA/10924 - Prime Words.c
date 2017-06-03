#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char str[30];
    int i, sum, l;

    while(gets(str))
    {
        l=strlen(str);
        for(i=0, sum=0; i<l; i++)
        {
            if(str[i]>='a' && str[i]<='z'){sum=sum+str[i]-96;}
            else if(str[i]>='A' && str[i]<='Z'){sum=sum+str[i]-38;}
        }
        for(i=2; i<=sqrt(sum); i++)
        {
            if(sum%i==0)break;
        }
        if(i<=sqrt(sum))printf("It is not a prime word.\n");
        else{printf("It is a prime word.\n");}
        memset(str, '\0', sizeof(str));
    }
    return 0;
}

