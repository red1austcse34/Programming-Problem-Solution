#include <bits/stdc++.h>

using namespace std;
long int digSum, altSum, sign, l;
char str[1010];
bool check;

bool div2(){
    if((str[l-1]-'0')%2)return false;
    else return true;
}

bool div3(){
    if(digSum%3)return false;
    else return true;
}

bool div4(){
    int x;
    if(l>1)x = (str[l-2]-'0')*10+(str[l-1]-'0');
    else x = str[l-1]-'0';
    if(x%4)return false;
    return true;
}
bool div5()
{
    if(str[l-1]=='0' || str[l-1]=='5')return true;
    return false;
}
bool div6()
{
    if(div2()&&div3())return true;
    else return false;
}

bool div7()
{
    long int sev[6]={1,3,2,-1,-3,-2}, i, j=0, sum=0;
    for(i=l-1; i>=0; i--)
    {
        sum+=(str[i]-'0')*sev[j];
        j++; j%=6;
    }
    if(sum%7)return false;
    return true;
}

bool div8()
{
    int x;
    if(l>2)x = (str[l-3]-'0')*100+(str[l-2]-'0')*10+(str[l-1]-'0');
    else if(l>1)x = (str[l-2]-'0')*10+(str[l-1]-'0');
    else x = str[l-1]-'0';
    if(x%8)return false;
    return true;
}

bool div9()
{
    if(digSum%9)return false;
    else return true;
}

bool div10()
{
    if(str[l-1]=='0')return true;
    return false;
}

bool div11()
{
    if(altSum%11)return false;
    else return true;
}

bool div12()
{
    if(div4()&&div3())return true;
    else return false;
}

int main()
{
    long int t, i, j, n, di;
    cin >> t;
    while(t--)
    {
        di=0;
        cin >> str;
        l=strlen(str);
        sign=1; digSum=0; altSum=0;
        for(i=0; str[i]!='\0'; i++)
        {
            int x = str[i]-'0';
            digSum+=x;
            x*=sign;
            sign*=(-1);
            altSum+=x;
        }
        cin >> n; i=0;
        while(i<n)
        {
            cin >> j;
            if(j==1)di++;
            else if(j==2 && div2())di++;
            else if(j==3 && div3())di++;
            else if(j==4 && div4())di++;
            else if(j==5 && div5())di++;
            else if(j==6 && div6())di++;
            else if(j==7 && div7())di++;
            else if(j==8 && div8())di++;
            else if(j==9 && div9())di++;
            else if(j==10 && div10())di++;
            else if(j==11 && div11())di++;
            else if(j==12 && div12())di++;
            i++;
        }
        if(di==n)cout << str << " - Wonderful.\n";
        else cout << str << " - Simple.\n";
    }
    return 0;
}
