#include <stdio.h>
int main ()
{
   int n,i,j,k,a[101][101],num,num2;
   while(scanf("%d",&n))
   {
       if(n==0) break;
       if(n==1){printf("  1\n"); continue;}
       num=1;
       num2=1;
       k=0;
       while(k<n)
       {

           for(i=k;i<n;i++)
           {

               for(j=k;j<n;j++)
               {
                   a[i][j]=num++;
                   a[j][i]=num2++;
               }
               k++;
               num=1;
               num2=1;
           }
       }
       for(i=0;i<n;i++)
       {
           for(j=0;j<n;j++)
           {
               if(i<=(n-1)&&j<(n-1)) printf("  %d ",a[i][j]);

               else printf("  %d",a[i][j]);
           }
           printf("\n");
       }
       printf("\n");
    }
   return 0;
}
