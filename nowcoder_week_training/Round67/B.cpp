#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N =1e5+10;
double a,b,c,d;
int ans=0;
void solve()
{
    cin>>a>>b>>c>>d;
    ans=0;
    ans=b*c/d;
    cout<<a-ans<<' ';
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