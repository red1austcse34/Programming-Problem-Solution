#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d, res;
    scanf("%f %f %f %f", &a, &b, &c, &d);
    res=sqrt(pow(a-c, 2)+pow(b-d, 2));
    printf("%.4f\n", res);
    return 0;
}
