#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char mstr[10005], str[102][102];
    int i, j, k, t, l, r;

    scanf("%d", &t);
    scanf("\n");
    for(i=0; i<t; i++)
    {
        gets(mstr);
        l=strlen(mstr);
        r=sqrt(l);
        if(r*r!=l){printf("INVALID\n"); continue;}
        for(j=0, k=0; k<r; k++)
        {
            for(l=0; l<r; l++)
            {
                str[k][l]=mstr[j];
                j++;
            }
        }
        for(k=0; k<r; k++)
        {
            for(l=0; l<r; l++)
            {
                printf("%c",str[l][k]);
            }
        }
        printf("\n");
    }
    return 0;
}
