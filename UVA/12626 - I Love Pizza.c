#include <stdio.h>
#include <string.h>

int main()
{
    char str[602];
    int t, i, j, k, let[6], l;

    scanf("%d", &t);
    scanf("\n");
    while(t--)
    {
        gets(str);
        l=strlen(str);
        let[0]=0; let[1]=0; let[2]=0; let[3]=0; let[4]=0; let[5]=0;
        for(i=0; i<l; i++)
        {
            if(str[i]=='M'){let[0]++;}
            else if(str[i]=='A'){let[1]++;}
            else if(str[i]=='R'){let[2]++;}
            else if(str[i]=='G'){let[3]++;}
            else if(str[i]=='I'){let[4]++;}
            else if(str[i]=='T'){let[5]++;}
        }
        let[1]=let[1]/3;
        let[2]=let[2]/2;
        for(i=0; i<6; i++)
        {
            for(j=0; j<5; j++)
            {
                if(let[j]>let[j+1]){k=let[j]; let[j]=let[j+1]; let[j+1]=k;}
            }
        }
        printf("%d\n", let[0]);
    }
    return 0;
}
