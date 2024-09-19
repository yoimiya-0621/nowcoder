#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e5+10;
ll a[N];
ll n,k,ans;
vector<ll>v;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>k;
    ll sum=0,m=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        m=max(m,a[i]);
    }
    if(k<=1)
    {
        cout<<m;
    }
    else{
        sort(a,a+n);
        while(a[n-1]-max(a[n-2],a[n-1]/k)>1){
            m-=a[n-1]-max(a[n-2],a[n-1]/k);
            ans++;
            a[n-1]/=k;
            ll x=a[n-1];
            int j;
            for(j=n-1;a[j-1]>x;j--)
            {
                a[j]=a[j-1];
            }
            a[j]=x;
        }
        cout<<ans+m;
    }
    return 0;
}