#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e5+10;
int a[N],b[N];
void solve()
{
    int n;
    cin>>n;
    map<int,int>mp1,mp2,mp;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mp1[a[i]]+=1;
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        mp2[b[i]]+=1;
    }
    
}
signed main()
{
    int _=1;
    //cin>>_;
    while(_--)
    {
        solve();
    }
    return 0;
}