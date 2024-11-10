#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N =1e5+10;
string s;
int ans=0;
void solve()
{
    cin>>s;
    deque<char>d;
    for(int i=0;i<s.size();i++)
    if(isdigit(s[i]))
    d.push_back(s[i]);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        d.push_back(s[i]);
    }
    for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i]>='a'&&s[i]<='z')
        d.push_front(s[i]);
    }
    for(int i=0;i<d.size();i++)
    cout<<d[i];
}
signed main ()
{
    int _=1;
    cin>>_;
    while(_--)
    {
        solve();
    }
    return 0;
}