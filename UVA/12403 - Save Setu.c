#include <stdio.h>

int main()
{
    int t, i;
    long long int x, sum=0;
    char str[6];
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%s", str);
        if(str[0]=='r'){printf("%lld\n", sum);}
        else if(str[0]=='d')
        {
            scanf("%lld", &x);
            sum=sum+x;
        }

    }
    return 0;
}
