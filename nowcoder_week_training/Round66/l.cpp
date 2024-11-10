#include <bits/stdc++.h>
using namespace std;
const int N =1e6+10;
int n,m;
int a[N];
map<int,int>mp;
int main()
{
    cin>>n>>m;
    int f=1;
    int ans=1e7;
    int l=1,r=n;
    int flag=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(mp[a[i]]==0)
        flag++;
        mp[a[i]]+=1;
        while(mp[a[l]]>1)
        {
            mp[a[l]]-=1;
            l++;
        }
        if(flag>=m){
            if(ans>i-l)
            {
                ans=i-l;
                r=i;
                f=l;
            }
        }
    }
    
    cout<<f<<' '<<r;
    return 0;
}