#include <stdio.h>
#include <string.h>

int age[101];

int main()
{
    int n, i, j, k, max;

    while(scanf("%d", &n))
    {
        if(n==0)break;
        for(i=0, max=0; i<n; i++)
        {
            scanf("%d", &k);
            if(k>max)max=k;
            age[k]++;
        }
        for(i=1; i<=max; i++)
        {
            while(age[i]--)
            {
                printf("%d", i);
                if(i==max && !age[i])break;
                printf(" ");
            }
        }
        printf("\n");
        memset(age, 0, sizeof(age));
    }
    return 0;
}
