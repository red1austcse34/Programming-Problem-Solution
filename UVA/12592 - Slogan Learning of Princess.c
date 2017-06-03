#include <stdio.h>
#include <string.h>

int main()
{
    char slo1[21][101], slo2[21][101], ques[101];
    int i, j, k, n, q;

    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("\n");
        gets(slo1[i]);
        scanf("\n");
        gets(slo2[i]);
    }
    scanf("%d", &q);
    for(i=0; i<q; i++)
    {
        scanf("\n");
        gets(ques);
        for(j=0; j<n; j++)
        {
            if(!strcmp(ques, slo1[j])){puts(slo2[j]); break;}
        }
    }
    return 0;
}
