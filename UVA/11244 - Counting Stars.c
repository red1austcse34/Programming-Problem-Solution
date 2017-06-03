#include <stdio.h>

char sky[101][101];

int main()
{
    int r, c, i, j, star;
    while(scanf("%d%d", &r, &c))
    {
        if(r==0 && c==0){break;}
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                scanf(" %c", &sky[i][j]);
            }
        }
        for(star=0, i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                if(sky[i][j]=='*' && sky[i-1][j-1]!='*' && sky[i-1][j]!='*' && sky[i-1][j+1]!='*' && sky[i][j-1]!='*' && sky[i][j+1]!='*' && sky[i+1][j-1]!='*' && sky[i+1][j]!='*' && sky[i+1][j+1]!='*'){star++;}
            }
        }
        printf("%d\n", star);
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                sky[i][j]='\0';
            }
        }
    }
    return 0;
}

