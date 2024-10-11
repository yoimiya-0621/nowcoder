#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e6+10;
ll n,k;
ll a[N];
void solve()
{
    cin>>n>>k;
    map<ll,ll>mp;
    ll ans=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>=1&&a[i]<=k&&mp[a[i]]==0){
            mp[a[i]]+=1;
            ans++;
        }
    }
    if(ans==k)
        cout<<"YES"<<'\n';
    else{
        cout<<"NO"<<'\n';
    }
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