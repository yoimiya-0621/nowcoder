//模板
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fi first
#define se second
#define vi vector<int>
#define pi pair<int,int>
const int mod = 1e9+7;
const int N = 2e5+10;
string s;
int t[N],n;
int a0[N],a1[N],a2[N];
int ans=1e9+10;
void solve(){
    cin>>n>>s;
    for(int i=1;i<=n;i++)
    {
        cin>>t[i];
        if(s[i-1]=='0'){
            a0[i]=a0[i-1];
            a1[i]=a1[i-1]+t[i];
            a2[i]=a2[i-1]+t[i];
        }
        if(s[i-1]=='1'){
            a0[i]=a0[i-1]+t[i];
            a1[i]=a1[i-1];
            a2[i]=a2[i-1]+t[i];
        }
        if(s[i-1]=='2'){
            a0[i]=a0[i-1]+t[i];
            a1[i]=a1[i-1]+t[i];
            a2[i]=a2[i-1];
        }
    }
    ans=min(ans,a0[n]);//全0
    ans=min(ans,a1[n]);//全1
    ans=min(ans,a2[n]);//全2
    for(int i=1;i<=n;i++)
    {
        ans=min(ans,a0[i]+a1[n]-a1[i]);
        ans=min(ans,a0[i]+a2[n]-a2[i]);
        ans=min(ans,a1[i]+a0[n]-a0[i]);
        ans=min(ans,a1[i]+a2[n]-a2[i]);
        ans=min(ans,a2[i]+a0[n]-a0[i]);
        ans=min(ans,a2[i]+a1[n]-a1[i]);
    }
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=i;j<=n;j++)
    //     {
    //         ans=min(a0[i]+a1[j+1]-a1[i-1]+a2[n]-a2[j-1],ans);
    //         ans=min(a0[i]+a2[j+1]-a2[i-1]+a1[n]-a1[j-1],ans);
    //         ans=min(a1[i]+a0[j+1]-a0[i-1]+a2[n]-a2[j-1],ans);
    //         ans=min(a1[i]+a2[j+1]-a2[i-1]+a0[n]-a0[j-1],ans);
    //         ans=min(a2[i]+a1[j+1]-a1[i-1]+a0[n]-a0[j-1],ans);
    //         ans=min(a2[i]+a0[j+1]-a0[i-1]+a1[n]-a1[j-1],ans);
    //     }
    // }
    cout<<ans;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int _ = 1;
    //cin>>_;
    while(_--){
        solve();
    }
    return 0;
}