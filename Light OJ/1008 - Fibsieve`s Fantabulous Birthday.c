#include <stdio.h>

int main()
{
    int arr[5][5]={1, 2, 9, 10, 25, 4, 3, 8, 11, 24, 5, 6, 7, 12, 23, 16, 15, 14, 13, 22, 17, 18, 19, 20, 21}, i, j, k, t, x, y, n;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d", &n);
        for(j=0; j<5; j++)
        {
            for(k=0; k<5; k++)
            {
                if(n == arr[j][k]){x=j+1; y=k+1; break;}
            }
            if(k<5)break;
        }
        printf("Case %d: %d %d\n", i+1, x, y);
    }
    return 0;
}
