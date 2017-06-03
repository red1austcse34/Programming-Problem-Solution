#include <stdio.h>

int main()
{

    int t, i, a, b, c;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d%d%d", &a, &b, &c);
        if(a*a==((b*b)+(c*c))||b*b==((a*a)+(c*c))||c*c==((a*a)+(b*b)))
        {
            printf("Case %d: yes\n", i+1);
        }
        else
        {
            printf("Case %d: no\n", i+1);
        }
    }
    return 0;
}
