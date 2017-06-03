#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if(a>=c && b>d){printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", 23-a+c, 60-b+d);}
    else if(a>=c && b<=d){printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", 24-a+c, d-b);}
    else if(a<c && b>d){printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", c-a-1, d-b+60);}
    else{printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", c-a, d-b);}
    return 0;
}
