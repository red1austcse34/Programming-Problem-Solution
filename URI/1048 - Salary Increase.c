#include <stdio.h>

int main()
{
    double s, i;
    int p;
    scanf("%lf", &s);
    if(s>=0 && s<400.01){i=(s*15)/100; p=15;}
    else if(s>=400.01 && s<800.01){i=(s*12)/100; p=12;}
    else if(s>=800.01 && s<1200.01){i=(s*10)/100; p=10;}
    else if(s>=1200.01 && s<2000.01){i=(s*7)/100; p=7;}
    else if(s>=2000.01){i=(s*4)/100; p=4;}
    printf("Novo salario: %.2lf\n", s+i);
    printf("Reajuste ganho: %.2lf\n", i);
    printf("Em percentual: %d %%\n", p);
    return 0;
}
