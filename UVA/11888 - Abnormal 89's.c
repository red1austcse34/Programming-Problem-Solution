#include <stdio.h>
#include <string.h>

char str[300000];

int pal(int, int);
int pal(int a, int l)
{
    while(a<l)
    {
        if(str[a]!=str[l]){return 0;}
        a++; l--;
    }
    return 1;
}

int main()
{
    int t, i, l, j, r;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%s", str);
        l=strlen(str)-1;
        for(r=0, j=0; j<l; j++)
        {
            if(pal(0, j) && pal(j+1, l)){r=1; break;}
        }
        if(r){printf("alindrome\n");}
        else if(pal(0, l)){printf("palindrome\n");}
        else{printf("simple\n");}
    }
    return 0;
}
