// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// const int N=5e5+10;
// ll a[N];
// int n;
// int main()
// {
//     int T;
//     cin>>T;
//     while(T--)
//     {
//         cin>>n;
//         ll ans=0,ans2=0;
//         map<ll,ll>mp;
//         for(int i=0;i<n;i++)
//         {
//             cin>>a[i];
//             for(ll j=1;j<=(ll)sqrt(a[i]);j++){
//                 if(a[i]%j==0)
//                 {
//                     if(j*j!=a[i]){
//                     mp[j]+=1;
//                     mp[a[i]/j]+=1;
//                     }
//                     else{
//                         mp[j]+=1;
//                     }
//                 }
//                 if(mp[j]==2)
//                 {
//                     ans++;
//                     mp[j]+=1;
//                 }
//                 if(mp[a[i]/j]==2)
//                 {
//                     ans++;
//                     mp[a[i]/j]+=1;
//                 }
//             }
//         }
//         if(ans%2==0)
//         cout<<"Haitang"<<'\n';
//         else
//         cout<<"dXqwq"<<'\n';
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
const int N=5e5+10;
int a[N];
int main()
{
    int T,n;
    cin>>T;
    while(T--){
        cin>>n;
        long long ans=0;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]=1;
        }
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++){
                if(mp[gcd(a[i],a[j])]==0){
                    ans++;
                    mp[gcd(a[i],a[j])]=1;
                    v.push_back(gcd(a[i],a[j]));
                }
            }
        }
        for(int i=0;i<v.size();i++){
            for(int j=i+1;j<v.size();j++){
                if(mp[gcd(v[i],v[j])]==0){
                    mp[gcd(v[i],v[j])]=1;
                    v.push_back(gcd(v[i],v[j]));
                    ans++;
                }
            }
        }
        
        if(ans%2)
        cout<<"dXqwq"<<'\n';
        else
        cout<<"Haitang"<<'\n';
    }
}