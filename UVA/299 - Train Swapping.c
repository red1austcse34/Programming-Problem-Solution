#include <stdio.h>

int main()
{
    int arr[50], i, j, k, t, n, s, a;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d", &n);
        for(j=0; j<n; j++)
        {
            scanf("%d", &arr[j]);
        }
        for(s=0, j=0; j<n; j++)
        {
            for(k=0; k<n-1-j; k++)
            {
                if(arr[k]>arr[k+1])
                {
                    a=arr[k];
                    arr[k]=arr[k+1];
                    arr[k+1]=a;
                    s++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n", s);
    }
    return 0;
}
