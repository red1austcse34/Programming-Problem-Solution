#include <stdio.h>

int main()
{
    float price;
    int c, a;

    scanf("%d %d", &c, &a);
    if(c==1){price=a*4.00;}
    else if(c==2){price=a*4.50;}
    else if(c==3){price=a*5.00;}
    else if(c==4){price=a*2.00;}
    else if(c==5){price=a*1.50;}
    printf("Total: R$ %.2f\n", price);
    return 0;
}
