#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=5e5+10;
int n,x,y;
ll ans=0;
vector<pair<int,int>>v;
map<pair<int,int>,int>mp;
int main()
{
    string s;
    cin>>n>>x>>y>>s;
    pair<int,int>v0(0,0);
    v.push_back(v0);
    for(int i=0;i<n;i++){
        if(s[i]=='W'){
            v0.second+=1;
        }
        else if(s[i]=='S'){
            v0.second-=1;
        }
        else if(s[i]=='A'){
            v0.first-=1;
        }
        else{
            v0.first+=1;
        }
        v.push_back(v0);
    }
    for(int i=n;i>=0;i--){
        mp[v[i]]=i;
        pair<int,int>ok(v[i].first+x,v[i].second+y);
        if(mp[ok]){
            ans+=n-mp[ok]+1;
        }
    }
    cout<<ans;
    return 0;
}