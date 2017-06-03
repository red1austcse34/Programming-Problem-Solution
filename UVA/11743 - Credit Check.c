#include <stdio.h>
#include <string.h>

int dig1(int);
int dig1(int x)
{
    int y;
    if(x>9){y=x%10; x=(x/10)+y;}
    return x;
}

int main()
{
    int t, i, j, sum, l;
    char str[30];

    scanf("%d", &t);
    scanf("\n");
    while(t--)
    {
        gets(str);
        l=strlen(str);
        for(i=0, j=0, sum=0; i<l; i++)
        {
            if(str[i]==' ')continue;
            if(j%2==0){sum=sum+dig1(2*(str[i]-48));}
            else{sum=sum+str[i]-48;}
            j++;
        }
        if(sum%10==0)printf("Valid\n");
        else printf("Invalid\n");
    }
    return 0;
}
