#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const int N=1e6+10;
ld a;
void solve()
{
    cin>>a;
    ld x=(ll)a;
    ll k=1000;
    ld y=(a+sqrt(a*a-4))/2;
    // do{
    //     x=a+1/x;
    // }while(k--);
    cout<<setprecision(12)<<y<<'\n'; 
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}