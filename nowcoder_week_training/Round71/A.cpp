#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fi first
#define se second
#define vi vector<int>
#define pi pair<int,int>
const int mod = 1e9+7;
const int N = 2e5+10;
int n,k;
void solve(){
    cin>>n>>k;
    if(n<=k)
        cout<<"NO";
    else
        cout<<"YES";
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