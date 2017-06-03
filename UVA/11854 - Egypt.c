#include<stdio.h>
int main()
{
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c))
    {
       if(a==0&&b==0&&c==0){
        return 0;
       }
       else if(a*a+b*b==c*c||a*a+c*c==b*b||c*c+b*b==a*a){
            printf("right\n");
       }
       else {
            printf("wrong\n");
       }
        }
    return 0;
}
