#include <stdio.h>

int main()
{
    float a, b, c, d, e, e1, e2, e3, res;
    int i, t;

    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%f%f%f%f%f%f%f", &a, &b, &c, &d, &e1, &e2, &e3);
        if(e1<=e2 && e1<=e3)e=(e2+e3)/2;
        else if(e2<=e1 && e2<=e3)e=(e1+e3)/2;
        else if(e3<=e1 && e3<=e2)e=(e1+e2)/2;
        res=a+b+c+d+e;
        if(res>=90)printf("Case %d: A\n", i+1);
        else if(res>=80)printf("Case %d: B\n", i+1);
        else if(res>=70)printf("Case %d: C\n", i+1);
        else if(res>=60)printf("Case %d: D\n", i+1);
        else if(res<60)printf("Case %d: F\n", i+1);
    }
    return 0;
}
