#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e6+10;
const int mod = 1e9+7;
int n,q;
vector<vector<int>>tr;
int x,y;
void solve()
{
    cin>>n>>q;
    tr = vector<vector<int>>(n+1);
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        x--;
        y--;

    }
    cin>>x>>y;
    cout<<1;
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