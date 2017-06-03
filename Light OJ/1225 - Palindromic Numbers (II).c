#include <stdio.h>
#include <string.h>

int main()
{
    int t, i, j, l;
    char str[10];

    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%s", str);
        l=strlen(str);
        for(j=0; j<l/2; j++)
        {
            if(str[j]!=str[l-1-j]){break;}
        }
        if(j>=l/2){printf("Case %d: Yes\n", i+1);}
        else{printf("Case %d: No\n", i+1);}
    }
    return 0;
}
