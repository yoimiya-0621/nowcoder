#include <bits/stdc++.h>
using namespace std;
#define int long long
#define double long double
const int N =1e6+10;
int n,m;
double a[N];
double b[N];
double c[N];
double d[N];

void solve()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ty=0;
    while(m--)
    {
        cin>>ty;
        if(ty==1)
        {
            int l,r;
            cin>>l>>r;
            l--,r--;
            d[l]=1;
            d[r]=1;
            int i=l,j=r;
            while(d[l]==1)l--;
            while(d[r]==1)r++;
            l++;
            r--;
            i=l;j=r;
            double sum=0;
            for(int x=i;x<=j;x++){
                sum+=a[x];
                d[x]=1;
            }
            for(int x=i;x<=j;x++){
                d[x]=1;
                a[x]=sum/(j-l+1);
            }
        }
        else{
            int i;
            cin>>i;
            cout<<setprecision(12)<<a[i-1]<<'\n';
        }
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