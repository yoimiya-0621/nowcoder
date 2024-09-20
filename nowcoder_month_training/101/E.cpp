#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e6+10;
ll a[N];
ll n,ans;
map<ll,ll>mp;
map<ll,ll>mp2;

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]=1;
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        int flag=1;
        for(int j=1;j<=sqrt(a[i]);j++)
        {
            if(a[i]%j==0)
            {
                if(mp[a[i]/j]!=1||mp[a[i]/(a[i]/j)]!=1)
                {
                    flag=0;
                    break;
                }
            }
        }
        if(flag){
            if(mp2[a[i]]==0)
            {
                ans++;
                mp2[a[i]]=1;
            }
        }
    }
    cout<<ans;
    return 0;
}