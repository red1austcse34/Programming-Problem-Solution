#include <stdio.h>

char s[100];
int main()
{
    int t, i, j, k;
    double m, n, sum;

    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%s", s);
        for(j=0, sum=0; s[j]!='\0'; j++)
        {
            if(s[j]=='C')
            {
                if((s[j+1]>='1' && s[j+1]<='9')&&(s[j+2]>='1' && s[j+2]<='9')){n=(s[j+1]-48)*10+(s[j+2]-48);j=j+2;}
                else if(s[j+1]>='1' && s[j+1]<='9'){n=(s[j+1]-48);j=j+1;}
                else{n=1;}
                m=12.01*n;
            }
            else if(s[j]=='H')
            {
                if((s[j+1]>='1' && s[j+1]<='9')&&(s[j+2]>='1' && s[j+2]<='9')){n=(s[j+1]-48)*10+(s[j+2]-48);j=j+2;}
                else if(s[j+1]>='1' && s[j+1]<='9'){n=(s[j+1]-48);j=j+1;}
                else{n=1;}
                m=1.008*n;
            }
            else if(s[j]=='O')
            {
                if((s[j+1]>='1' && s[j+1]<='9')&&(s[j+2]>='1' && s[j+2]<='9')){n=(s[j+1]-48)*10+(s[j+2]-48);j=j+2;}
                else if(s[j+1]>='1' && s[j+1]<='9'){n=(s[j+1]-48);j=j+1;}
                else{n=1;}
                m=16.00*n;
            }
            else if(s[j]=='N')
            {
                if((s[j+1]>='1' && s[j+1]<='9')&&(s[j+2]>='1' && s[j+2]<='9')){n=(s[j+1]-48)*10+(s[j+2]-48);j=j+2;}
                else if(s[j+1]>='1' && s[j+1]<='9'){n=(s[j+1]-48);j=j+1;}
                else{n=1;}
                m=14.01*n;
            }
            sum=sum+m;
        }
        printf("%.3lf\n", sum);
    }
    return 0;
}
