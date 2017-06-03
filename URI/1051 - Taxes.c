#include <stdio.h>

int main()
{
    float a, res;
    scanf("%f", &a);
    if(a>=0 && a<2000.01)
    {
        printf("Isento\n");
    }
    else
    {
        if(a>=2000.01 && a<3000.01){res=((a-2000)*8)/100;}
        else if(a>=3000.01 && a<4500.01){res=(((a-3000)*18)/100)+80;}
        else{res=(((a-4500)*28)/100)+350;}
        printf("R$ %.2f\n", res);
    }
    return 0;
}
