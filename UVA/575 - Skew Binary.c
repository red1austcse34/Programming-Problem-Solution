#include <stdio.h>
#include <string.h>
#include<math.h>

int main()
{
    char str[40];
    long int x, i, j, l, sum;

    while(scanf("%s", str))
    {
        l=strlen(str); j=l;
        for(i=0, sum=0; i<l; i++)
        {
            sum=sum+((str[i]-48)*(pow(2,j)-1));
            j--;
        }
        if(sum==0)break;
        printf("%ld\n", sum);
    }
    return 0;
}
