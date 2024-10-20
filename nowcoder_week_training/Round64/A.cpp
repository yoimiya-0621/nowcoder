#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e6+10;
const int mod = 1e9+7;
int n;
void solve()
{
    string s;
    cin>>s;
    if((s[0]=='Y'||s[0]=='y')&&(s[1]=='e'||s[1]=='E')&&s[2]=='s'||s[2]=='S')
    cout<<"accept";
    else
    cout<<"wrong answer";
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