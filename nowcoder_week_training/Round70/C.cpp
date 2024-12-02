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
    int cnt=0;
    vi v;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            v.push_back(i+1);
            cnt++;
        }
    }
    cout<<cnt<<'\n';
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<' '<<v[i]<<"\n";
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