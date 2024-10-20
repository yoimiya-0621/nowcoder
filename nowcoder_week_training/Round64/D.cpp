#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e6+10;
const int mod = 1e9+7;
int n;
int a[4][4];
void solve()
{
    memset(a,0,sizeof(a));
    cin>>a[1][1]>>a[1][2];
    cin>>a[2][1]>>a[2][2];
    int sum1=a[1][1]+a[2][2];
    int sum2=a[1][2]+a[2][1];
    if(min(sum1,sum2)%2==1)
    cout<<"yukari";
    else
    cout<<"kou";
    cout<<'\n';
}
signed main()
{
    int _ = 1;
    cin>>_;
    while(_--)
    {
        solve();
    }
    return 0;
}