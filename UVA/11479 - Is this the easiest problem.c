#include <stdio.h>

int main()
{
    long int a, b, c, t, i;

    scanf("%ld", &t);
    for(i=0; i<t; i++)
    {
        scanf("%ld%ld%ld", &a, &b, &c);
        if(a+b>c && b+c>a && c+a>b)
        {
            if(a==b && b==c){printf("Case %ld: Equilateral\n", i+1);}
            else if(a==b || b==c || c==a){printf("Case %ld: Isosceles\n", i+1);}
            else{printf("Case %ld: Scalene\n", i+1);}
        }
        else
        {
            printf("Case %ld: Invalid\n", i+1);
        }
    }
    return 0;
}
