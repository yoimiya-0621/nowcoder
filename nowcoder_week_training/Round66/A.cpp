#include <bits/stdc++.h>
using namespace std;
int n;
int a[3];
void solve()
{
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    cout<<max(a[2],a[1]+a[0]);
}
int main()
{
    int _=1;
    //cin>>_;
    while(_--)
    {
        solve();
    }
    return 0;
}