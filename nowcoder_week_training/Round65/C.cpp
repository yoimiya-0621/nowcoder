#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e6+10;
int a[N];
int n;
void solve()
{
    int s1=0,s2=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int ma=a[n-1],mi=a[0];
    for(int i=0;i<n;i++)
    {
        if(i%2)
        s2+=a[i];
        else
        s1+=a[i];
    }
    s1=s1-ma+mi;
    s2=s2-mi+ma;
    if(s1<s2)
    cout<<"yukari";
    else if(s1>s2)
    cout<<"kou";
    else
    cout<<"draw";
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