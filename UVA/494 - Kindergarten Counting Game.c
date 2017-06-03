#include<stdio.h>

int main()
{
    char sen[100];
    long int c=0,w=0,i;

    while(gets(sen))
    {
        c=0;w=0;
        for(i=0;sen[i];i++)
        {
            if((sen[i]>='A'&&sen[i]<='Z')||(sen[i]>='a'&&sen[i]<='z'))
                w=1;
            else
            {
                if(w)c++;
                w=0;
            }

        }
        printf("%ld\n", c);
        c=0;w=0;
    }
    return 0;
}
