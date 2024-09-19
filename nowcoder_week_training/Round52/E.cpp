#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+10;
int f[N];
int sum[N];
int n,m;
int t,a,b;
int find(int x){
    if(f[x]==x)
        return x;
    else{
        f[x]=find(f[x]);
        return f[x];
    }
}
signed main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        f[i]=i;
        cin>>sum[i];
    }
    while(m--)
    {
        cin>>a>>b;
        f[find(a)]=find(b);
    }
    map<int,int>mp;
    for(int i=1;i<=n;i++){
        mp[find(i)]=max(mp[find(i)],sum[i]);
    }
    int ans=0;
    int mi=1e9;
    map<int,int>mp2;
    for(int i=1;i<=n;i++){
        if(mp2[find(i)]==0){
            ans+=mp[find(i)];
            mi=min(mi,mp[find(i)]);
            mp2[find(i)]=1;
        }
    }
    cout<<ans-mi;
    return 0;
}