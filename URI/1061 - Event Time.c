#include <stdio.h>

int main()
{
    int d1, h1, m1, s1, d2, h2, m2, s2, t=0;
    char str[5];

    scanf("%s %d %d : %d : %d", str, &d1, &h1, &m1, &s1);
    scanf("%s %d %d : %d : %d", str, &d2, &h2, &m2, &s2);
    if(s1>s2){s1=s2+60-s1; t=1;}
    else{s1=s2-s1;}
    if(t==1){m2--; t=0;}
    if(m1>m2){m1=m2+60-m1; t=1;}
    else{m1=m2-m1;}
    if(t==1){h2--; t=0;}
    if(h1>h2){h1=h2+24-h1; t=1;}
    else{h1=h2-h1;}
    if(t==1){d2--; t=0;}
    d1=d2-d1;
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", d1, h1, m1, s1);
    return 0;
}
