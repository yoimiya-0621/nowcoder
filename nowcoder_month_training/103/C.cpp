#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N =1e5+10;
int n;
void solve()
{
    cin>>n;
    if(n==1){
        cout<<1<<'\n';
        return;
    }
    else if(n==2){
        cout<<1<<'\n';
        return;
    }
    int i=0;
    int f=0,mm=n;
    while(n){
        i++;
        if(n%2)
            f++;
        n>>=1;
        
    }
    if(f==1){
        cout<<mm<<'\n';
        return;
    }
    int x=1<<i;
    cout<<x<<'\n';
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int _=1;
    cin>>_;
    while(_--)
    {
        solve();
    }
    return 0;
}