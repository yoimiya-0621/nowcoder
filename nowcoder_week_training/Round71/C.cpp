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
map<char,int>mp;
int n=0;
void solve(){
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(mp[s[i]]==0){
            n++;
            mp[s[i]]=1;
        }
    }
    cout<<n;
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