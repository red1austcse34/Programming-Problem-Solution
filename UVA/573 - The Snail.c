#include <stdio.h>

int main()
{
    double h, u, d, f, l;
    int i;

    while(scanf("%lf%lf%lf%lf", &h, &u, &d, &f))
    {
        if(h==0)break;
        i=0; l=0;
        f=f*u/100;
        while(1)
        {
            i++;
            if(u>0){l=l+u; u=u-f;}
            if(l>h){printf("success on day %d\n",i); break;}
            l=l-d;
            if(l<0){printf("failure on day %d\n",i); break;}
        }
    }
    return 0;
}
