#include <stdio.h>

int main()
{
    double t;
    long int n, ar[12], i=0;

    scanf("%lf", &t);
    t=t*100;
    n=t;
    ar[0]=n/10000;
    ar[1]=(n%10000)/5000;
    ar[2]=(n%10000)%5000/2000;
    ar[3]=(n%10000)%5000%2000/1000;
    ar[4]=(n%10000)%5000%2000%1000/500;
    ar[5]=(n%10000)%5000%2000%1000%500/200;
    ar[6]=(n%10000)%5000%2000%1000%500%200/100;
    ar[7]=(n%10000)%5000%2000%1000%500%200%100/50;
    ar[8]=(n%10000)%5000%2000%1000%500%200%100%50/25;
    ar[9]=(n%10000)%5000%2000%1000%500%200%100%50%25/10;
    ar[10]=(n%10000)%5000%2000%1000%500%200%100%50%25%10/5;
    ar[11]=(n%10000)%5000%2000%1000%500%200%100%50%25%10%5;

    printf("NOTAS:\n");
    printf("%ld nota(s) de R$ 100.00\n", ar[0]);
    printf("%ld nota(s) de R$ 50.00\n", ar[1]);
    printf("%ld nota(s) de R$ 20.00\n", ar[2]);
    printf("%ld nota(s) de R$ 10.00\n", ar[3]);
    printf("%ld nota(s) de R$ 5.00\n", ar[4]);
    printf("%ld nota(s) de R$ 2.00\n", ar[5]);
    printf("MOEDAS:\n");
    printf("%ld moeda(s) de R$ 1.00\n", ar[6]);
    printf("%ld moeda(s) de R$ 0.50\n", ar[7]);
    printf("%ld moeda(s) de R$ 0.25\n", ar[8]);
    printf("%ld moeda(s) de R$ 0.10\n", ar[9]);
    printf("%ld moeda(s) de R$ 0.05\n", ar[10]);
    printf("%ld moeda(s) de R$ 0.01\n", ar[11]);
    return 0;
}
