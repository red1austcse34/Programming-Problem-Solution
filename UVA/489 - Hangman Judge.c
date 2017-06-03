#include <stdio.h>
#include <string.h>

int main()
{
    char word[100000], guess[100000];
    int stroke, n, i, l1, l2, j, p, temp;

    while(scanf("%d", &n))
    {
        if(n<0)break;
        printf("Round %d\n", n);
        scanf("\n");
        gets(word);
        l1=strlen(word);
        scanf("\n");
        gets(guess);
        l2=strlen(guess);
        for(i=0, p=0, stroke=0; i<l2; i++)
        {
            temp=0;
            for(j=0; j<l1; j++)
            {
                if(guess[i]==word[j]){p++; word[j]=0; temp=1;}

            }
            if(!temp){stroke++;}
            if(stroke==7){printf("You lose.\n"); break;}
            if(p==l1){printf("You win.\n"); break;}
        }
        if(i==l2){printf("You chickened out.\n");}
    }
    return 0;
}
