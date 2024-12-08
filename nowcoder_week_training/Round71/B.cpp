#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fi first
#define se second
#define vi vector<int>
#define pi pair<int,int>
const int mod = 1e9+7;
const int N = 2e5+10;
int n;
string s;
void solve(){
    cin>>n>>s;
    s+=s;
    map<char,int>mp;
    int ans=1e9+10;
    for(int i=0;i<2*n;i++)
    {
        if(mp[s[i]]==0)
        mp[s[i]]=i+1;
        else{
            ans=min(ans,i+1-mp[s[i]]);
            mp[s[i]]=i+1;
        }
    }
    if(ans==1e9+10||ans>=n)
    cout<<-1<<'\n';
    else
    cout<<ans-1<<'\n';
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