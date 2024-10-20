#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e6+10;
const int mod = 1e9+7;
int n;
vector<char>v;
map<char,int>mp;
map<int,char>mp2;
map<int,char>ans;
void solve()
{
    string s;
    cin>>s;
    int flag=1;
    for(int i=0;i<s.size();i++)
    {
        if(mp[s[i]]==0)
        {
            v.push_back(s[i]);
        }
        mp[s[i]]+=1;
        mp2[i+1]=s[i];
        if(mp[s[i]]>s.size()/2)
        flag=0;
    }
    if(flag==0){
        cout<<-1;
        return;
    }
    for(int k=1;k<=s.size();k++)
    {
        for(int x=0;x<v.size();x++)
        {
            if(mp2[k]!=v[x]&&mp[v[x]]>0){
                cout<<v[x];
                mp[v[x]]-=1;
                break;
            }
        }
    }
}
signed main()
{
    int _ = 1;
    //cin>>_;
    while(_--)
    {
        solve();
    }
    return 0;
}