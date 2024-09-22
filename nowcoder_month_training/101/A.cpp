#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a[100010];
ll b[100010];
int main()
{
    int n,k;
    cin>>n>>k;
    int s=n-k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        b[i]=b[i-1]+a[i];
    }
    ll ans=0;
    for(int i=1;i<=n;i++)
    {
        if(i-s>=0)
        ans=max(ans,b[i]-b[i-s]);
    }
    cout<<ans;
    return 0;
}