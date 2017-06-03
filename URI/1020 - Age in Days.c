#include<stdio.h>

int main()
{
    int t, y, m, d;
    scanf("%d", &t);
    y=t/365;
    m=(t%365)/30;
    d=(t%365)%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", y, m, d);
    return 0;
}
