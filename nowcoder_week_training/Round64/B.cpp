#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e6+10;
const int mod = 1e9+7;
int n;
void solve()
{
    cin>>n;
    cout<<n<<'\n';
    for(int i=1;i<=17;i++)
    {
        for(int j=2;j<=n;j++){
            if(pow(j,i)==n)
            cout<<"="<<j<<"^"<<i<<'\n';
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