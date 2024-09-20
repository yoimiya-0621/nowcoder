#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e4;
ll n,q;
ll a[N];
ll b[N];
map<ll,ll>mp;
int main()
{
    cin>>n>>q;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        b[i]=b[i-1]+a[i];
    }
    ll x=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            x=b[i]-b[j];
            if(x==(ll)sqrt(x)*(ll)sqrt(x))
            {
                for(int k=j+1;k<=i;k++)
                {
                    mp[k]+=1;
                }
            }
        }
    }
    while(q--)
    {
        cin>>x;
        cout<<mp[x]<<'\n';
    }
    return 0;
}