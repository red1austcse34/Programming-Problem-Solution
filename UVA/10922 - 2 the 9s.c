#include <stdio.h>
#define f 1.0673956817111818692592637626711

int main()
{
    double x;
    while(scanf("%lf", &x))
    {
        printf(".10%lf\n", x*f);
    }
    return 0;
}
