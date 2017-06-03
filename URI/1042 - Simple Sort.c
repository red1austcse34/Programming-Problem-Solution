#include <stdio.h>

int main()
{
    int a1[3], a2[3], i, j, t;

    scanf("%d %d %d", &a2[0], &a2[1], &a2[2]);
    a1[0] = a2[0]; a1[1]= a2[1]; a1[2] = a2[2];
    for(i=0; i<2; i++)
    {
        for(j=0; j<2-i; j++)
        {
            if(a1[j]>a1[j+1])
            {
                t=a1[j]; a1[j]=a1[j+1]; a1[j+1]=t;
            }
        }
    }
    for(i=0; i<3; i++)
    {
        printf("%d\n", a1[i]);
    }
    printf("\n");
    for(i=0; i<3; i++)
    {
        printf("%d\n", a2[i]);
    }
    return 0;
}
