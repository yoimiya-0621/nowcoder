#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e3+10;
char a[N][N];
int n;
int dx[4]={0,0,1,1};
int dy[4]={0,1,0,1};
void solve()
{
    cin>>n;
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
            int flag=0;
            for(int k=0;k<4;k++)
            {
                if(a[i+dx[k]][j+dy[k]]=='*')
                flag++;
            }
            if(flag==4)
            ans++;
        }
    }
    cout<<ans;
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