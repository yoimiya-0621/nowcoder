#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=5e5+10;
ll a[N];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n-2;i++)
    {
        if(a[i]*a[i+1]>=a[i+1]*a[i+2])
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES"<<'\n';
    for(int i=0;i<n;i++)
        cout<<a[i]<<' ';
    return 0;
}