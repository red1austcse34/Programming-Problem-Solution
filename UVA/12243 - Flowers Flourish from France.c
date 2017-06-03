#include <stdio.h>
#include <string.h>

int main()
{
    char str[100000];
    int i, j, k, l;

    while(gets(str))
    {
        if(str[0]=='*')break;
        l=strlen(str);
        for(i=0, j=k=0; i<l; i++)
        {
            if(str[i]==' ')
            {
                if(str[i+1]==str[0] || str[i+1]==str[0]-32 || str[i+1]==str[0]+32){j++;}
                k++;
            }
        }
        if(j==k){printf("Y\n");}
        else{printf("N\n");}
    }
    return 0;
}
