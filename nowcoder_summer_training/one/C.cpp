#include <iostream>
using namespace std;
#define ll long long
const ll mod=1000000007;
const int N =5e5+10;
ll a[N];
ll b[N];
int main()
{
    int q,k=0;
    ll t,v;
    cin>>q;
    while(q--)
    {
        cin>>t>>v;
        k++;
        k-=t;
        a[k]=v;
        b[k]=(a[k]*(k)+b[k-1])%mod;
        cout<<b[k]<<'\n';
    }
    return 0;
}