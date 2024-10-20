#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e6+10;
const int mod = 1e9+7;
int n;
int a[N];
int sum=0;
map<int,int>mp;
void solve()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(mp[a[i]]!=0){
            sum-=mp[a[i]]*(mp[a[i]]-1)/2;
            sum-=mp[a[i]]*(mp[a[i]]+1)/2;
        }
        mp[a[i]]+=1;
        cout<<sum<<' ';
    }
}
signed main()
{
    int _ = 1;
    //cin>>_;
    while(_--)
    {
        solve();
    }
    return 0;
}