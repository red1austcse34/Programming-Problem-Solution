#include <stdio.h>

int main()
{
    float c, f, diff;
    int t, i;

    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%f%f", &c, &diff);
        f=(9*c)/5+32;
        f=f+diff;
        c=(5*f-160)/9;
        printf("Case %d: %.2f\n", i+1, c);
    }
    return 0;
}
