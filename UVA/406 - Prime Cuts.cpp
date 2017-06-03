#include <bits/stdc++.h>

using namespace std;

bool m[1000];
vector <int> v;

int main()
{
    //freopen("out.txt", "w", stdout);
    int i,j,k,n,c;
    m[2]=1;
    v.push_back(1);
    v.push_back(2);
    for(i=4; i<1000; i+=2)m[i]=1;
    for(i=3; i*i<1000; i+=2)
    {
        if(!m[i])
        {
            v.push_back(i);
            for(j=i*i; j<1000; j+=(2*i))m[j]=1;
        }
    }
    for(; i<1000; i+=2)
    {
        if(!m[i])v.push_back(i);
    }
    while(scanf("%d %d", &n, &c)!=EOF)
    {
        k=upper_bound(v.begin(), v.end(), n)-v.begin()-1;
        printf("%d %d:", n, c);

        if(k%2==0)
        {
            if(2*c-1>k)
                for(i=0; i<=k; i++)
                    printf(" %d", v[i]);
            else
                for(i=k/2-c+1; i<k/2+c; i++)
                    printf(" %d", v[i]);
        }
        else
        {
            if(2*c>k)
                for(i=0; i<=k; i++)
                    printf(" %d", v[i]);
            else
                for(i=k/2-c+1; i<=k/2+c; i++)
                    printf(" %d", v[i]);
        }
        printf("\n\n");
    }
    return 0;
}
