#include <bits/stdc++.h>
using namespace std;\
const int N=5e5+10;
struct Tree{
    int a;
    int b;
    int x;
};
bool cmp(Tree t1,Tree t2){
    if(t1.a==t2.a)
    return t1.b<t2.b;
    else
    return t1.a<t2.a;
}
int deep[N],n;
void dfs(int i,int j);
vector<int>v[N];
vector<int>ans;
map<pair<int,int>,int>mp;
double ans1=0;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    double ans=0;
    while(t--)
    {
        ans=0;
        cin>>n;
        Tree t[n-1];
        for(int i=0;i<n;i++)
        {
            cin>>t[i].a>>t[i].b>>t[i].x;
            if(t[i].a>t[i].b)
            swap(t[i].a,t[i].b);
            mp[{t[i].a,t[i].b}]=t[i].x;
        }
        sort(t,t+n,cmp);
        
    }
    return 0;
}