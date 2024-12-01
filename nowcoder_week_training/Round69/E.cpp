#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N =2e5+10;
int n,sum;
int a[N];
int b[N];
int c[N];
signed main()
{
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        sum+=a[i];
        b[i]=b[i-1]+a[i];
    }
    int ans=0;
    if(sum%3)
    {
        cout<<0;
        return 0;
    }
    else{
        vector<int>v1;
        vector<int>v2;
        for(int i=n;i>=1;i--){
            c[i]=c[i+1]+a[i];
        }
        for(int i=1;i<=n;i++){
            if(b[i]==sum/3)
                v1.push_back(i);
            if(c[i]==sum/3)
                v2.push_back(i);
        }
        // for(int i=0;i<v1.size();i++)
        //     cout<<v1[i]<<' ';
        // cout<<'\n';
        // for(int i=0;i<v2.size();i++)
        //     cout<<v2[i]<<' ';
        for(int i=0;i<v1.size();i++){
            int x=v2.end()-upper_bound(v2.begin(),v2.end(),v1[i]+1);
            ans+=x;
        }
    }
    cout<<ans;
    return 0;
}