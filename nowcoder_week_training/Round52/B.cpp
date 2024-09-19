#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll a,b,n,n2,x;
        cin>>a>>b>>n;
        n2=n;
        x=n;
       if(2*a+b*3<2*n){
        cout<<"NO"<<'\n';
       }
       else{
        if(2*n>b*3){
            if(b%2)
            b--;
            n-=b/2*3;
            if(n*2<=a*2)
            cout<<"YES"<<'\n';
            else
            cout<<"NO"<<'\n';
       }
       else{
        n%=3;
           if(n*2<=a*2)
            cout<<"YES"<<'\n';
            else
            cout<<"NO"<<'\n';
       }
    }
    }

    return 0;
}