#include <stdio.h>

int main()
{
    long int a, b, t, i;

    scanf("%ld", &t);
    for(i=0; i<t; i++)
    {
        scanf("%ld%ld", &a, &b);
        if(a>b){printf(">\n");}
        else if(a<b){printf("<\n");}
        else{printf("=\n");}
    }
    return 0;
}
