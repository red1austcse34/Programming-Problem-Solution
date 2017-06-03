#include <bits/stdc++.h>

using namespace std;

map < string , int > mp;
map < string , int > :: iterator it;
int c=1;

void pre()
{
    char s[6];
    s[1]='\0';
    for(s[0]='a'; s[0]<='z'; s[0]++)mp[string(s)]=c++;
    s[2]='\0';
    for(s[0]='a'; s[0]<='z'; s[0]++)
        for(s[1]=s[0]+1; s[1]<='z'; s[1]++)mp[string(s)]=c++;
    s[3]='\0';
    for(s[0]='a'; s[0]<='z'; s[0]++)
        for(s[1]=s[0]+1; s[1]<='z'; s[1]++)
            for(s[2]=s[1]+1; s[2]<='z'; s[2]++)mp[string(s)]=c++;
    s[4]='\0';
    for(s[0]='a'; s[0]<='z'; s[0]++)
        for(s[1]=s[0]+1; s[1]<='z'; s[1]++)
            for(s[2]=s[1]+1; s[2]<='z'; s[2]++)
                for(s[3]=s[2]+1; s[3]<='z'; s[3]++)mp[string(s)]=c++;
    s[5]='\0';
    for(s[0]='a'; s[0]<='z'; s[0]++)
        for(s[1]=s[0]+1; s[1]<='z'; s[1]++)
            for(s[2]=s[1]+1; s[2]<='z'; s[2]++)
                for(s[3]=s[2]+1; s[3]<='z'; s[3]++)
                    for(s[4]=s[3]+1; s[4]<='z'; s[4]++)mp[string(s)]=c++;
}

int main()
{
    pre();
    string s;
    while(cin >> s)
    {
        it=mp.find(s);
        if(it==mp.end())printf("0\n");
        else printf("%d\n", it->second);
    }
    return 0;
}
