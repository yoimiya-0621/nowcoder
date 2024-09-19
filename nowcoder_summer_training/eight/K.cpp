#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    string s;
    while(T--)
    {
        cin>>s;
        int flag=1;
        for(int i=0;i<s.size();)
        {
            if(s[i]=='a'&&s[i+1]=='v'&&s[i+2]=='a'&&s[i+3]=='v'&&s[i+4]=='a')
            i+=5;
            else if(s[i]=='a'&&s[i+1]=='v'&&s[i+2]=='a')
            i+=3;
            else{
                flag=0;
                break;
            }
        }
        if(flag)
        cout<<"YES"<<'\n';
        else
        cout<<"NO"<<'\n';
    }
    return 0;
}