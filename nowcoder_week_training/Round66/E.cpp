#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+10;
int f[N];
int dep[N];
int n,m;
int t,a,b;
int find(int x){
    if(f[x]==x){
        return x;
    }
    else{
        f[x]=find(f[x]);
        dep[f[x]]=dep[find(f[x])];
        return f[x];
    }
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>dep[i];
        f[i]=i;
    }
    while(m--)
    {
        cin>>t>>a>>b;
        if(t==1){
            f[find(a)]=find(b);
        }
        else{
            int i=0;
            cin>>i;
            cout<<setprecision(12)<<dep[i]<<'\n';
        }
    }
    return 0;
}