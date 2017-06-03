#include<stdio.h>
int main()
{
    int N,x1,a,x2,b,x3,c,x4,d,x5,e,x6,f,x7,g;

    scanf("%d",&N);
    x1=N/100;
    a=N%100;
    x2=a/50;
    b=a%50;
    x3=b/20;
    c=b%20;
    x4=c/10;
    d=c%10;
    x5=d/5;
    e=d%5;
    x6=e/2;
    f=e%2;
    x7=f/1;
    g=f%1;




    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",N,x1,x2,x3,x4,x5,x6,x7);

    return 0;
}
