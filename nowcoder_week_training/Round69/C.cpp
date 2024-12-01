#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
int h,x,y,z;
int i,j,k;
int gcd(int a,int b)
{
    if(a<b)
        swap(a,b);
    int res=1;
    while(b){
        res=a%b;
        a=b;
        b=res;
    }
    return a;
}
int GCD(int i,int j,int k)
{
    int res1=gcd(i,j);
    int res2=gcd(k,j);
    int res =gcd(res1,res2);
    return res;
}
signed main()
{
    cin>>n>>h;
    while(n--)
    {
        cin>>x>>y>>z;
        i=x,j=y,k=2*h-z;
        i/=GCD(i,j,k);
        j/=GCD(i,j,k);
        k/=GCD(i,j,k);
        cout<<i<<' '<<j<<' '<<k<<'\n';
    }
    return 0;
}