#include <stdio.h>

int main()
{
    int x, y, i, j, k;

    while(scanf("%d%d", &x, &y)!=EOF)
    {
        for(i=0; x%y!=0; i++)
        {
            if(i>1)printf(",");
            j=x/y;
            k=x%y;
            if(i==0){printf("[%d;", j);}
            else{printf("%d", j);}
            x=y; y=k;
        }
        if(i>1){printf(",%d]\n", x/y);}
        else{printf("%d]\n", x/y);}
    }
    return 0;
}
