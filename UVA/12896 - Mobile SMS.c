#include <stdio.h>


int main()
{
    int t, x, i, j, ar1[100], ar2[100];
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d", &x);
        for(j=0; j<x; j++)
        {
            scanf("%d", &ar1[j]);
        }
        for(j=0; j<x; j++)
        {
            scanf("%d", &ar2[j]);
        }
        for(j=0; j<x; j++)
        {
            if(ar1[j]==1 && ar2[j]==1){printf(".");}
            else if(ar1[j]==1 && ar2[j]==2){printf(",");}
            else if(ar1[j]==1 && ar2[j]==3){printf("?");}
            else if(ar1[j]==1 && ar2[j]==4){printf("\"");}
            else if(ar1[j]==2 && ar2[j]==1){printf("a");}
            else if(ar1[j]==2 && ar2[j]==2){printf("b");}
            else if(ar1[j]==2 && ar2[j]==3){printf("c");}
            else if(ar1[j]==3 && ar2[j]==1){printf("d");}
            else if(ar1[j]==3 && ar2[j]==2){printf("e");}
            else if(ar1[j]==3 && ar2[j]==3){printf("f");}
            else if(ar1[j]==4 && ar2[j]==1){printf("g");}
            else if(ar1[j]==4 && ar2[j]==2){printf("h");}
            else if(ar1[j]==4 && ar2[j]==3){printf("i");}
            else if(ar1[j]==5 && ar2[j]==1){printf("j");}
            else if(ar1[j]==5 && ar2[j]==2){printf("k");}
            else if(ar1[j]==5 && ar2[j]==3){printf("l");}
            else if(ar1[j]==6 && ar2[j]==1){printf("m");}
            else if(ar1[j]==6 && ar2[j]==2){printf("n");}
            else if(ar1[j]==6 && ar2[j]==3){printf("o");}
            else if(ar1[j]==7 && ar2[j]==1){printf("p");}
            else if(ar1[j]==7 && ar2[j]==2){printf("q");}
            else if(ar1[j]==7 && ar2[j]==3){printf("r");}
            else if(ar1[j]==7 && ar2[j]==4){printf("s");}
            else if(ar1[j]==8 && ar2[j]==1){printf("t");}
            else if(ar1[j]==8 && ar2[j]==2){printf("u");}
            else if(ar1[j]==8 && ar2[j]==3){printf("v");}
            else if(ar1[j]==9 && ar2[j]==1){printf("w");}
            else if(ar1[j]==9 && ar2[j]==2){printf("x");}
            else if(ar1[j]==9 && ar2[j]==3){printf("y");}
            else if(ar1[j]==9 && ar2[j]==4){printf("z");}
            else if(ar1[j]==0 && ar2[j]==1){printf(" ");}
        }
        printf("\n");
    }
    return 0;
}
