#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a,b;
const ll mod=998244353;
ll x=1,y=1;
ll qpow(ll a,ll n,ll p)
{
    ll ans=1;
    while(n)
    {
        if(n&1)
            ans=ans%p*a%p;
            a=a%p*a%p;
            n>>=1;
    }
    return ans;
}
ll inv(ll a,ll p)
{
    return qpow(a,p-2,p);
}
int main()
{
    cin>>a>>b;
    if(a<b)
    {
        while(a<=b)
        {
            b-=a;
            a*=2;
            y*=2;
        }
        //cout<<x<<' '<<y<<' ';
        cout<<(x*inv(y,mod))%mod<<' '<<((y-x)*inv(y,mod))%mod;
    }
    else{
        while(a>=b)
        {
            a-=b;
            b*=2;
            y*=2;
        }
        cout<<((y-x)*inv(y,mod))%mod<<' '<<(x*inv(y,mod))%mod;
    }
    return 0;
}