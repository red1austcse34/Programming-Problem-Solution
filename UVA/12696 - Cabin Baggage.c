#include <stdio.h>

int main()
{
    double l, w, d, o;
    int i, t, sum, j;

    scanf("%d", &t);
    for(i=0, sum=0; i<t; i++)
    {
        j=0;
        scanf("%lf%lf%lf%lf", &l, &w, &d, &o);
        if(l<=56 && w<=45 && d<=25 && o<=7){j=1;}
        else if((l+w+d)<=125 && o<=7){j=1;}
        printf("%d\n", j);
        sum=sum+j;
    }
    printf("%d\n", sum);
    return 0;
}
