#include <bits/stdc++.h>

using namespace std;

int main()
{
    char str[100100];
    int l, i, mir, pal;
    while(scanf("%s", &str)!=EOF)
    {
        mir=0; pal=1;
        l=strlen(str);
        for(i=0; i<=l/2; i++)
        {
            if(str[i]!=str[l-i-1])
            {
                pal=0;
                if(mir!=-1 && str[i]=='E' && str[l-i-1]=='3')mir++;
                else if(mir!=-1 && str[i]=='J' && str[l-i-1]=='L')mir++;
                else if(mir!=-1 && str[i]=='L' && str[l-i-1]=='J')mir++;
                else if(mir!=-1 && str[i]=='S' && str[l-i-1]=='2')mir++;
                else if(mir!=-1 && str[i]=='Z' && str[l-i-1]=='5')mir++;
                else if(mir!=-1 && str[i]=='2' && str[l-i-1]=='S')mir++;
                else if(mir!=-1 && str[i]=='3' && str[l-i-1]=='E')mir++;
                else if(mir!=-1 && str[i]=='5' && str[l-i-1]=='Z')mir++;
                else {mir=-1;break;}
            }
            else if(mir!=-1 && str[i]==str[l-i-1] && (str[i]=='A' || str[i]=='H' || str[i]=='I' || str[i]=='M' || str[i]=='O' || str[i]=='T' || str[i]=='U' || str[i]=='V' || str[i]=='W' || str[i]=='X' || str[i]=='Y' || str[i]=='1' || str[i]=='8'))mir++;
            else mir=-1;
        }
        if(pal && mir>0)printf("%s -- is a mirrored palindrome.\n\n", str);
        else if(pal)printf("%s -- is a regular palindrome.\n\n", str);
        else if(mir>0)printf("%s -- is a mirrored string.\n\n", str);
        else printf("%s -- is not a palindrome.\n\n", str);
        memset(str, '\0', sizeof(str));
    }
    return 0;
}
