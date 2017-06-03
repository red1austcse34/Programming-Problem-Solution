#include<stdio.h>

int main()
{
    int t,i,n,a,b;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&n);
        if(n<0 || n>20)break;
        else if(n>10){a=n-10;b=10;}
        else{a=0;b=n;}
        printf("%d %d\n",a,b);
    }
    return 0;
}
