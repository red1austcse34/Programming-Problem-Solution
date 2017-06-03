#include <stdio.h>
#include <string.h>

char str1[100], str2[100];

void rev(char *, char *);
void rev(char * str1, char * str2)
{
    long long int l, t, i, h;
    l=strlen(str1);
    h =l/2;
	for (i=0; i<=h; i++)
    {
		str2[i]=str1[l-i-1];
		str2[l-i-1]=str1[i];
	}
	str2[l] = '\0';
}

int main()
{
    int t, i, j;
    long long int x, y;

    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%lld", &x);
        sprintf(str1, "%lld", x);
        rev(str1, str2);
        j=0;
        while(strcmp(str1, str2))
        {
            j++;
            sscanf(str2, "%lld", &y);
            x=x+y;
            sprintf(str1, "%lld", x);
            rev(str1, str2);
        }
        printf("%d %lld\n", j, x);
    }
    return 0;
}
