#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
const int N=2e6+10;
ll a[N];
ll x,y,sum,l,dx,dy;
void solve(){
    cin>>n>>l;
    ll ans=1e9+10;
    for(int i=-n;i<=n;i++){
        x=i,y=l+x;
        sum=0;
        for(int j=1;j<=n;j++){
            sum+=min(abs(j-x),abs(j-y));
        }
        if(ans>sum){
            ans=sum;
            dx=x,dy=y;
        }
    }
    cout<<dx<<' '<<dy<<' '<<ans<<'\n';
}
int main()
{
    int T;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}