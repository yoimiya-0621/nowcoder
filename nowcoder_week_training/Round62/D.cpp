#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e6+10;
const ll mod = 1e9+7;
ll n,ans=0;
ll p[N];
vector<vector<ll>>tr;
ll qpow(ll a,ll b,ll p= 1e9+7){
    ll res= 1;
    while(b){
        if(b & 1){
            res =res * a % p;
        }
        b >>= 1;
        a =a*a%p;
    }
    return res;
}
ll inv(ll a,ll p = 1e9+7){
    return qpow(a,p-2,p);
}
void dfs(ll now,ll fa,ll deep){
    ll cnt = tr[now].size()-1;
    if(now==0)
        cnt++;
    for(int i=0;i<tr[now].size();i++){
        if(tr[now][i]!=fa){
            p[tr[now][i]]=inv(cnt)*p[now];
            p[tr[now][i]]%=mod;
            dfs(tr[now][i],now,deep+1);
        }
    }
    if(tr[now].size()==1&&now!=0){
        ans = (ans + (p[now]%mod*(deep%mod))%mod)%mod;
    }
}
void solve(){
    ans=0;
    cin>>n;
    tr = vector<vector<ll>> (n + 1);
    if(n==1){
        cout<<1;
        return;
    }
    ll x,y;
    for(int i=0;i<n-1;i++){
        cin>>x>>y;
        x--;
        y--;
        tr[x].push_back(y);
        tr[y].push_back(x);
    }
    p[0]=1;
    dfs(0,-1,1);
    cout<<ans;
}   
int main()
{
    int _ = 1;
    cout<<"哈哈";
    //cin>>_;
    //cout<<5*inv(2)<<'\n';
    while(_--){
        solve();
    }
    return 0;
}