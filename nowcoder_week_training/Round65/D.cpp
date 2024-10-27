#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e4+10;
int n,m,k;
char a[N][25];
int b[N];
char med[15][25];
void solve()
{
    cin>>n>>m;
    map<int,int>isok;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='1')
            b[i]++;
        }
    }
    cin>>k;
    map<pair<int,int>,int>mp;
    for(int i=1;i<=k;i++)
    {
        for(int j=1;j<=m;j++){
            cin>>med[i][j];
            if(med[i][j]=='1'){
                mp[{i,j}]=1;
            }
            if(isok[j]==0&&med[i][j]=='1')
            isok[j]=1;
        }
    }
    for(int i=1;i<=n;i++)
    {
        int flag=1;
        int ans=0;
        for(int j=1;j<=m;j++)
        {
            if(a[i][j]=='1'&&isok[j]==0)
            {
                cout<<0<<'\n';
                flag=0;
                break;
            }
            if(a[i][j]=='1'){
                int SUM=0,f=0;
                for(int x=1;x<=k;x++)
                {
                    int sum=0;
                    if(mp[{x,j}])
                    {
                        for(int y=1;y<=m;y++)
                        {
                            if(med[x][y]=='1'&&a[i][y]=='1')
                            sum++;
                        }
                        if(sum>SUM){
                            SUM=sum;
                            f=x;
                        }
                    }
                }
                ans++;
                for(int y=0;y<=m;y++)
                {
                    if(med[f][y]=='1'&&a[i][y]=='1')
                    a[f][y]='0';
                }
            }
        }
        if(flag){
            cout<<ans<<'\n';
        }
    }
}
signed main()
{
    int _=1;
    //cin>>_;
    while(_--)
    {
        solve();
    }
    return 0;
}