#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N =1e6+10;
int n,m;
double a[N];
double b[N];
double c[N];
void solve()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=i;
        c[i]=i;
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
            double sum=0;
            int i=-1,j=-1;
            i=b[l],j=c[r];
            int f=i;
            for(;i<=j;i++){
                sum+=a[i];
                b[i]=f;
                c[i]=j;
            }
            double ave=sum/(j-f+1);
            i=f;
            for(;i<=j;i++)
                a[i]=ave;
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