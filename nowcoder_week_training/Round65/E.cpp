#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e6+10;
int n,x;
int a[N];
int b[N];
int c[N];
void solve()
{
   cin>>n>>x;
   int ma=0,mi=0;
   for(int i=1;i<=n;i++)
   {
        cin>>a[i];
        b[i]=a[i];
        c[i]=a[i];
        if(a[i]==-999){
            b[i]=b[i-1]-x;
            if(b[i]<-50)
            b[i]=50;
        }
        if(i>=2)
        ma+= b[i-1]-b[i]>=x?1:0;
    }
    for(int i=1;i<n;i++)
    {
        if(c[i]==-999)
        {
            c[i]=c[i+1]+x-1;
            if(c[i]>=50)
            c[i]=-50;
        }
        mi+=c[i]-c[i+1]>=x?1:0;
    }
    cout<<ma<<' '<<mi;
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