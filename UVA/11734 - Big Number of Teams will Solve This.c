#include <stdio.h>
#include <string.h>

void antsp(char*);
void antsp(char* str)
{
    int i, j;
    char a[30];
    for(i=0, j=0; str[i]; i++)
    {
        while(str[i]==' ')
        {
            i++;
        }
        a[j]=str[i];
        j++;
    }
    strcpy( str, a);
}

int main()
{
    char ans[30], jud[30];
    int t, p, i, j, l1, l2;

    scanf("%d", &t);
    scanf("\n");
    for(i=0; i<t; i++)
    {
        memset(ans, '\0', sizeof(ans));
        memset(jud, '\0', sizeof(jud));
        gets(ans);
        scanf("\n");
        gets(jud);
        if(!strcmp(ans, jud)){printf("Case %d: Yes\n", i+1); continue;}
        antsp(ans);
        antsp(jud);
        if(!strcmp(ans, jud)){printf("Case %d: Output Format Error\n", i+1); continue;}
        else{printf("Case %d: Wrong Answer\n", i+1);}
    }
    return 0;
}
