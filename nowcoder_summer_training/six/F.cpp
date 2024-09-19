#include <bits/stdc++.h>
using namespace std;
const int N=1e6+10;
struct S{
    int x;
    int id;
};
bool cmp(S a,S b){
    return a.x<b.x;
}
int main()
{
    int t,n,s,u,v;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        S a[N]={0};
        map<pair<int,int>,int>mp;
        vector<int>ans[N];
        for(int i=1;i<=n;i++)
        {
            a[i].x=n;
            a[i].id=i;
        }
        for(int i=0;i<s;i++)
        {
            cin>>u>>v;
            a[u].x--;
            a[v].x--;
            if(u>v)
            swap(u,v);
            mp[{u,v}]=1;
            mp[{v,u}]=1;
            ans[u].push_back(v);
        }
        sort(a+1,a+n+1,cmp);
        if(a[1].x+a[2].x<n-1)
        cout<<-1<<'\n';
        else
        {
            for(int i=1;i<=n;i++)
            {
                if(i>1)
                cout<<' ';
                cout<<a[i].id;
            }
            cout<<'\n';
        }
    }
    return 0;
}