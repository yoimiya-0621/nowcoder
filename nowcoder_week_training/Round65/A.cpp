#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e6+10;

int n;
void solve()
{
    int a,b;
    cin>>n>>a>>b;
    cout<<n/min(a,b);
}
signed main()
{
    int _=1;
    //cin>>_;
    while(_--)
    {
        solve();
    }
    return 0;
}