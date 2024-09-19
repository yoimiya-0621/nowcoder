#include <bits/stdc++.h>
using namespace std;
const int N=1e3+10;
int a[N][N];
int b[N][N];
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
int main()
{
    int n;
    cin>>n;
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
            if(i!=1&&j!=1){
                for(int k=0;k<4;k++)
                {
                    if(i+dx[k]>=1&&i+dx[k]<=n&&j+dy[k]>=1&&j+dy[k]<=n)
                    {
                        b[i+dx[k]][j+dy[k]]=min(b[i+dx[k]][j+dy[k]],b[i][j]+1);
                    }
                }
            }
        }
    }
    cout<<b[n][n];
    return 0;
}