#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1){
            cout<<'0'<<endl;
            continue;
        }
        else{
            int res;
            for(int i=1;i<=n;i++){
                int x;
                cin>>x;
                if(i==1){
                    res=x;
                    continue;
                }
                res=gcd(res,x);
            }
            cout<<res<<endl;
        }
    }
    return 0;
}