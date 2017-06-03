#include <stdio.h>

int main()
{
    int i, pos=0;
    float a;
    for(i=0; i<6; i++)
    {
        scanf("%f", &a);
        if(a>0)pos++;
    }
    printf("%d valores positivos\n", pos);
    return 0;
}
