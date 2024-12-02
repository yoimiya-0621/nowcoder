#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fi first
#define se second
#define vi vector<int>
#define pi pair<int,int>
const int mod = 1e9+7;
const int N =5e5+10;
int n,k;
int a[N],b[N],c[N];
void solve(){
    cin>>n>>k;
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    memset(c,0,sizeof(c));
    for(int i=1; i<=n;i++){
        cin>>a[i];
        b[i]=max(b[i-1],a[i]);
    }
    for(int i=n;i>=1;i--){
        c[i]=max(c[i+1],a[i]);
    }
    if(n==1)
    cout<<a[1]<<'\n';
    else if(n==2)
    cout<<a[1]+a[2]<<'\n';
    else{
        int ans=0;
        for(int i=1;i<=min(k,n);i++){
            int id = n - (k -(i-1));
            if(id<=i)
            id=i+1;
            ans=max(ans,a[i]+c[id]);
        }
        if(k==0)
            ans=a[1]+a[n];
        cout<<ans<<'\n';
    }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int _ = 1;
    cin>>_;
    while(_--){
        solve();
    }
    return 0;
}