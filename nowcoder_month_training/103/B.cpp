#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N =1e6+10;
int n;
void solve()
{
    string s,s1,s2;
    cin>>s;
    int i;
    int flag=0;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='@')
            {
                flag=1;
                continue;
            }
        if(!flag){
            s1+=s[i];
        }
        else{
            s2+=s[i];
        }
    }
    // s1= s.substr(0,i);
    // s2= s.substr(i+1,s.size()-i);
    if(s1.size()>=64||s2.size()>=255)
    {
        cout<<"No"<<'\n';
        return;
    }
    for(int i=0;i<s1.size();i++)
    {
        if(!isdigit(s1[i])&&!isalpha(s1[i])&&!(s[i]=='.'&&i!=0&&i!=s1.size()-1))
        {
            cout<<"No"<<'\n';
            return;
        }
    }
    for(int i=0;i<s2.size();i++)
    {
        if(!isdigit(s2[i])&&!isalpha(s2[i])&&!(s2[i]=='.'&&i!=0&&i!=s2.size()-1)&&!(s2[i]=='-'&&i!=0&&i!=s2.size()-1))
        {
            cout<<"No"<<'\n';
            return;
        }
    }
    cout<<"Yes"<<'\n';
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int _=1;
    cin>>_;
    while(_--)
    {
        solve();
    }
    return 0;
}