#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e6+10;
ll n,sum;
ll a[N];
void solve()
{
    cin>>n>>sum;
    ll x=0;
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        x+=a[i];
    }
    sort(a,a+n);
    if(x<sum){
        for(int i=0;i<n;i++){
            x+=1e4-a[i];
            ans++;
            if(x>=sum)
                break;
        }
    }else{
        for(int i=n-1;i>=0;i--){
            x-=a[i]+1e4;
            ans++;
            if(x<=sum)
                break;
        }
    }
    cout<<ans<<'\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}