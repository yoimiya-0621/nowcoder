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
int a[N];
void solve(){
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    if(a[0]==a[1]&&a[1]==a[2]&&a[2]==a[3])
    cout<<"NO\n";
    else
    cout<<"YES\n";
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