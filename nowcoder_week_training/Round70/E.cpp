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
void solve(){
    cin>>n;
    int x =n/4+ n%4?1:0;
    int ans =0;
    if(n%4==0)
    ans=x*4;
    else if(n%4==1)
    ans=1;
    else if(n%4==2)
    ans=x*4-1;
    else
    ans=0;
    if(n%2==0)
    cout<<(0^ans)<<'\n';
    else
    cout<<(1^ans)<<'\n';
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