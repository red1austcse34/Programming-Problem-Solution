#include <stdio.h>

int main()
{
    int t, n, i ,j, sum, s, arr[1000];
    float avg, r;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d", &n);
        for(j=0, sum=0; j<n; j++)
        {
            scanf("%d", &arr[j]);
            sum=sum+arr[j];
        }
        avg=(float)sum/n;
        for(j=0, s=0; j<n; j++)
        {
            if(arr[j]>avg){s=s+1;}
        }
        r=s*100.000/n;
        printf("%.3f%%\n", r);
    }
    return 0;
}
