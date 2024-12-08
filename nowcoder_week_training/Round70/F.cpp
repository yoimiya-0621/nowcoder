#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fi first
#define se second
#define vi vector<int>
#define pi pair<int,int>
const int mod = 1e9+7;
const int N = 6e4+10;
int n,k;
int a[N],v[N];
int check(int x)
{
    if(x>k||x<1)
        return 0;
    for(int i=0;i<n-1;i++)
    {
        if(v[i]%(min(a[i],a[i+1])+x))
            return 0;
    }
    return 1;
}
void solve(){
    cin>>n>>k;
    int m=1e9+10,bmin;
    for(int i=0;i<n;i++){
        cin>>a[i];
        v[i-1]=abs(a[i]-a[i-1]);
        if(i>0&&a[i]!=a[i-1]){
            if(abs(a[i]-a[i-1])<m)
            {
                m=abs(v[i-1]);
                bmin=min(a[i],a[i-1]);
            }
        }
    }    
    if(n==1||m==1e9+10){
        cout<<k<<' '<<k*(k+1)/2<<'\n';
        return ;
    }
    int cnt=0,sum=0,x;
    for(int z=1;z<=(int)sqrt(m);++z)
    {
        if(m%z==0)
        {
            x=m/z-bmin;
            if(check(x)){
                cnt++;
                sum+=x;
            }
            x=m/(m/z)-bmin;
            if(check(x)){
                cnt++;
                sum+=x;
            }
            
        }        
    }
    cout<<cnt<<' '<<sum<<'\n';
    
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int _ = 1;
    cin>>_ ;
    while(_--){
        solve();
    }
    return 0;
}