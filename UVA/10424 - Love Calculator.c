#include <stdio.h>
#include <string.h>
int dig1(int);
int dig1(int x)
{
    int sum=0;
    while(x)
    {
        sum=sum+(x%10);
        x=x/10;
    }
    if(sum>9)return dig1(sum);
    return sum;
}

int main()
{
    char n1[30], n2[30];
    int i, j, l1, l2, sum1, sum2;
    float p1, p2;

    while(gets(n1))
    {
        gets(n2);
        l1=strlen(n1);
        l2=strlen(n2);
        for(i=0, sum1=sum2=0; i<l1 || i<l2; i++)
        {
            if(n1[i]>='A'&& n1[i]<='Z'){sum1=sum1+n1[i]-64;}
            else if(n1[i]>='a'&& n1[i]<='z'){sum1=sum1+n1[i]-96;}
            if(n2[i]>='A'&& n2[i]<='Z'){sum2=sum2+n2[i]-64;}
            else if(n2[i]>='a'&& n2[i]<='z'){sum2=sum2+n2[i]-96;}
        }
        p1=dig1(sum1);
        p2=dig1(sum2);
        if(p2>p1){j=p2; p2=p1; p1=j;}
        printf("%.2f %%\n", (p2/p1)*100);
        memset(n1, '\0', sizeof(n1));
        memset(n2, '\0', sizeof(n2));
    }
    return 0;
}
