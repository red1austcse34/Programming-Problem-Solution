#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, d, r1, r2;

    scanf("%lf %lf %lf", &a, &b, &c);
    d=(b*b)-(4*a*c);
    if(a==0 || d<0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        r1=((b*-1)+sqrt(d))/(2*a);
        r2=((b*-1)-sqrt(d))/(2*a);
        printf("R1 = %.5lf\n", r1);
        printf("R2 = %.5lf\n", r2);
    }
    return 0;
}
