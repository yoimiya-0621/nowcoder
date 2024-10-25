#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N =1e6+10;
int n;
double a[N];
double b[N];
void solve()
{
    set<pair<double,double>>v;
    set<double>v2;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
                continue;
            if(b[i]==b[j])
                v2.insert((a[i]+a[j])/2);
            else{
                double k=1/((b[j]-b[i])/(a[j]-a[i]));
                double bb=b[j]-k*a[j];
                v.insert({k,bb});
            }
        }
    }
    cout<<v.size()+v2.size()<<'\n';
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int _=1;
    cin>>_;
    while(_--)
    {
        solve();
    }
    return 0;
}