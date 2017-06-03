#include <stdio.h>
#include <string.h>


int main()
{
    int i, j, t, l1, l2, d;
    char s1[100], s2[100];

    scanf("%d", &t);
    scanf("\n");
    for(i=0; i<t; i++)
    {
        gets(s1);
        gets(s2);
        l1=strlen(s1);
        l2=strlen(s2);
        if(l1!=l2)
        {
            printf("No\n");
            continue;
        }
        else
        {
            for(j=0; j<l1; j++)
            {
                if(s1[j]!=s2[j])
                {
                    if(s1[j]=='a' || s1[j]=='e' || s1[j]=='i' || s1[j]=='o' || s1[j]=='u')
                    {
                        if(s2[j]=='a' || s2[j]=='e' || s2[j]=='i' || s2[j]=='o' || s2[j]=='u'){d=1;}
                        else{printf("No\n");break;}
                    }
                    else
                    {
                        printf("No\n");break;
                    }
                }
                if(j==l1-1){printf("Yes\n");break;}
            }
        }
    }
    return 0;
}

