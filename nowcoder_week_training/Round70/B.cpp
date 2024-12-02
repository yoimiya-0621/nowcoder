#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fi first
#define se second
#define vi vector<int>
#define pi pair<int,int>
const int mod = 1e9+7;
const int N = 2e5+10;
int x,y,k,t;
void solve(){
    cin>>x>>y>>k>>t;
    char ch;
    cin>>ch;
    if(ch=='R')
    cout<<t+k;
    else{
        if(k>=t)
        cout<<t;
        else{
            cout<<x+k+t;
        }
    }
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