#include <stdio.h>

int main()
{
    int t, i, a, b, c, tb, temp, sum;

    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d%d%d", &a, &b, &c);
        tb=a+b; sum=0;
        while(tb>=c)
        {
            temp=tb/c;
            sum=sum+temp;
            tb=temp+tb%c;
        }
        printf("%d\n", sum);
    }
    return 0;
}
