#include <stdio.h>

int main()
{
    double a, b, c, d, e, avg;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    avg=(a*2+b*3+c*4+d*1)/10;
    printf("Media: %.1lf\n", avg);
    if(avg>4.9 && avg<=6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%lf", &e);
        printf("Nota do exame: %.1lf\n", e);
        avg=(avg+e)/2;
        if(avg<=4.9)
        {
            printf("Aluno reprovado.\n");
            printf("Media final: %.1lf\n", avg);
        }
        else
        {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1lf\n", avg);
        }
    }
    else if(avg<=4.9)
    {
        printf("Aluno reprovado.\n");
    }
    else
    {
        printf("Aluno aprovado.\n");
    }
    return 0;
}
