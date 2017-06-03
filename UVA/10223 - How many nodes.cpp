#include<bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long ans[25];
    int n;
    ans[1]=1;
    for(int i =2; i<25; i++)
    {
        ans[i]=(((4*i)+2)*ans[i-1])/(i+2);
    }
    //for(int i=1; i<25; i++) cout << ans[i] << endl;
    while(cin >> n)
    {
        for(int i=1; i<25; i++)
        {
            if(ans[i]>=n)
            {
                printf("%d\n", i);
                break;
            }
        }
    }
    return 0;
}

