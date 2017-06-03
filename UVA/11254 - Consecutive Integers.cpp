#include<bits/stdc++.h>

using namespace std;

int main()
{
    long int i, st, en, n;
    while(scanf("%ld", &n))
    {
        if(n==-1)break;
        for(i=sqrt(2*n); i>0; i--)
        {
            if(((2*n)-(i*i)+i)%(2*i)==0)
            {
                st=((2*n)-(i*i)+i)/(2*i);
                break;
            }
        }
        en=st+i-1;
        printf("%ld = %ld + ... + %ld\n", n, st, en);
    }
    return 0;
}
