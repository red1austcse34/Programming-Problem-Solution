#include <stdio.h>

int main()
{
    float a, b, c, d;
    char str[100];

    scanf("%s %f %f", str, &a, &b);
    c=(b*15)/100;
    d=a+c;
    printf("TOTAL = R$ %.2f\n", d);
    return 0;
}
