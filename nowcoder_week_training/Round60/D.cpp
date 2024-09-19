#include <bits/stdc++.h>
using namespace std;
const int N=2e6+10;
    int n;
    int a[N]={0};
void solve()
{

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    if(a[0]!=1){
        cout<<1<<'\n';
        return;
    }
    int sum=1;
    for(int i=1;i<n&&sum<n;i++)
    {
        if(a[i]>sum+1)
        {
            cout<<sum+1<<'\n';
            return;
        }
        sum+=a[i];
    }
    cout<<"Cool!"<<'\n';
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}