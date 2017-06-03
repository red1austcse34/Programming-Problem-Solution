#include <stdio.h>

int main()
{
    float a, b;
    while(scanf("%f%f",&a, &b)!= EOF)
    {
        if(a>b)
        {
            printf("%.0f\n", a-b);
        }
        else
        {
            printf("%.0f\n", b-a);
        }
    }
    return 0;
}
