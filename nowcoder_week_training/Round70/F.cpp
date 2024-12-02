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
int a[N];
void solve(){
    cin>>n>>k;
    int m=1e9+10,mm=1e9+10;
    vi v;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mm=min(a[i],mm);
        if(i>0){
            v.push_back(abs(a[i]-a[i-1]));
            m=min(m,abs(a[i]-a[i-1]));
        }
    }    
    deque<int>d;
    for(int i=1;i<=sqrt(m);i++){
        if(m%i==0){
            d.push_front(mm-i);
            d.push_back(mm-m/i);
        }
    }
    int cnt=0,sum=0;
    for(int i=0;i<d.size();i++){
        int flag=0;
        for(int j=0;j<n-1;j++){
            if(max(a[j+1]+d[i],a[j]+d[i])%min(a[j+1]+d[i],a[j]+d[i])!=0)
            {
                flag=1;
                break;
            }
        }
        if(!flag){
            cnt++;
            sum+=d[i];
        }
    }
    cout<<cnt<<' '<<sum<<'\n';
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