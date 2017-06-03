#include <stdio.h>
int gcd(int, int);
int gcd (int a,int b)
{
  int c;
  while ( a != 0 ) {
     c = a; a = b%a;  b = c;
  }
  return b;
}


int main()
{
    int a, b, c, d, t, i, resu, resd, fu, fd, temp;
    char ch;

    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d / %d %c %d / %d", &a, &b, &ch, &c, &d);
        if(ch=='+')
        {
            resu=(a*d)+(c*b);
            resd=b*d;
        }
        else if(ch=='-')
        {
            resu=(a*d)-(c*b);
            resd=b*d;
        }
        else if(ch=='*')
        {
            resu=a*c;
            resd=b*d;
        }
        else if(ch=='/')
        {
            resu=a*d;
            resd=b*c;
        }
        temp=gcd(resu, resd);
        if(temp<0){temp=temp*-1;}
        fu=resu/temp;
        fd=resd/temp;
        printf("%d/%d = %d/%d\n", resu, resd, fu, fd);
    }
    return 0;
}
