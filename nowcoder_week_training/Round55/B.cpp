#include <bits/stdc++.h>
using namespace std;
#define ll long long 
const int N=1e5+10;
ll a[N];
int main()
{
    int n,ans=0;
    cin>>n;
    ll sum=1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum*=a[i];
        sum%=10;
        if(sum==6)
            ans++;
    }
    cout<<ans;
    return 0;
}