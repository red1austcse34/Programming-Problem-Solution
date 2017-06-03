#include <stdio.h>
int main()
{
    int X,Y,i,j;
    scanf("%d %d",&X,&Y);
    for(i=1;i<Y;){
        for(j=1;j<=X;j++){
            printf("%d",i++);
            if(j<X){
                printf(" ");
            }
            else{
                printf("\n");
            }
        }
    }
return 0;
}
