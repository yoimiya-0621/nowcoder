#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N =5;
char ch[N][N];
int cnt[N][N];
void solve()
{
    int n,m;
    int x1,x2,y1,y2,s=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>ch[i][j];
            cnt[i][j]+=cnt[i][j-1];
            cnt[i][j]+=cnt[i-1][j];
            cnt[i][j]-=cnt[i-1][j-1];
            if(ch[i][j]=='*')
            cnt[i][j]++;
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            for(int i2=i;i2<=n;i2++)
            {
                for(int j2=j;j2<=m;j2++)
                {
                    if((j2-j+1)*(i2-i+1)>s)
                    {
                        if(cnt[i2][j2]-cnt[i-1][j-1]==0){
                            s=(j2-j+1)*(i2-i+1);
                            x1=i;
                            y1=j;
                            x2=i2;
                            y2=j2;
                        }
                    }
                }
            }
        }
    }
    cout<<x1<<' '<<y1<<' '<<x2<<' '<<y2;
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