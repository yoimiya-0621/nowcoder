#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N =1e5+10;
int n,c;
string s;
int w(int x)
{
    if(x==0)
        return 1;
    int res=1;
    while(x>9){
        x/=10;
        res++;
    }
    return res;
}
void solve()
{
    cin>>n>>c;
    n-=2;
    n-=w(c);
    int ans=0;
    for(int i=0;i<=c;i++)
    {
        if(w(i)+w(c-i)==n)
        ans++;
    }
    cout<<ans;
}
signed main ()
{
    int _=1;
    //cin>>_;
    while(_--)
    {
        solve();
    }
    return 0;
}