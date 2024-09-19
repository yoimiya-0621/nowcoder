#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N =1e5+10;
ll a[N];
int main()
{
    int n,fu=0,zheng=0;
    cin>>n;
    int ans=n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<0)
        fu++;
        else
        zheng++;
    }
    int zheng2=0;
    sort(a,a+n);
    vector<ll>v;
    for(int i=0,j=n-1;i<j;){
        if(a[i]<0&&a[j]>=0&&a[i]+a[j]<=0){
            ans-=2;
            i++;
            j--;
            fu--;
            zheng--;
        }
        else if(a[i]<0&&a[j]<0||a[i]>=0&&a[j]>=0)
        break;
        else{
            j--;
            zheng2++;
            v.push_back(a[j]);
        }
    }
    map<ll,int>mp;
    for(int i=0;i<v.size();i++){
        mp[v[i]]+=1;
        if(mp[v[i]]==2){
            ans-=2;
            mp[v[i]]=0;
            zheng2-=2;
        }
    }
    ans-=2*min(fu,zheng2);
    cout<<ans;
    return 0;
}