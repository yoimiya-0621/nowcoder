#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N =2e5+10;
double k,n;
int ans=0;
int a[N];
void solve()
{
    cin>>n>>k;
    if(k>n)
    cout<<"NO";
    else {
        cout<<"YES"<<'\n';
        for(int i=1;i<=n;i++)
        {
            if(i<=n-k)
            cout<<1<<' ';
            else 
            cout<<i<<' ';
        }
    }
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