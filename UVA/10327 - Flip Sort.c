#include<stdio.h>

int main()
{
    int n, i, array[1001], j, temp, res;

    while(scanf("%d", &n)!=EOF)
    {
        for(i=0; i<n; i++)
        {
            scanf("%d", &array[i]);
        }
        for(i=0, res=0; i<n; i++)
        {
            for(j=0; j<n-1-i; j++)
            {
                if(array[j]>array[j+1]){temp=array[j]; array[j]=array[j+1]; array[j+1]=temp; res++;}
            }
        }
        printf("Minimum exchange operations : %d\n", res);
    }
    return 0;
}
