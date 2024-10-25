#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e6+10;
const int mod = 1e9+7;
int n;
deque<char>v;
map<char,int>mp;
map<int,char>mp2;
string ans;
struct S{
    char ch;
    int cnt;
}seq[N];
bool cmp(S a,S b){
    return a.cnt>b.cnt;
}
void solve()
{
    string s;
    cin>>s;
    int flag=1;
    for(int i=0;i<s.size();i++)
    {
        ans.push_back(s[i]);
        if(mp[s[i]]==0)
        {
            v.push_front(s[i]);
        }
        mp[s[i]]+=1;
        mp2[i+1]=s[i];
        if(mp[s[i]]>s.size()/2)
        flag=0;
    }
    sort(ans.begin(),ans.end());
    cout<<ans;
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