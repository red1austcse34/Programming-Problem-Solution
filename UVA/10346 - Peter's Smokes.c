#include <stdio.h>

int main()
{
    int n, k, s, sum;

    while(scanf("%d%d", &n, &k)!=EOF)
    {
        sum=0;
        s=n;
        while(s>=k)
        {
            sum=sum+(s/k);
            s=(s/k)+(s%k);
        }
        printf("%d\n", n+sum);
    }
    return 0;
}
