#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N =1e4+10;
int n;
int a[N];
void solve()
{
    cin>>n;
    int ans=1e9;
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]+=1;
        if(mp[a[i]]==3){
            ans=min(ans,a[i]*3);
        }
    }
    if(ans==1e9)
    cout<<"no"<<'\n';
    else{
        cout<<"yes"<<'\n'<<ans<<'\n';
    }
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int _=1;
    cin>>_;
    while(_--)
    {
        solve();
    }
    return 0;
}