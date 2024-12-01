#include <bits/stdc++.h>
using namespace std;
int n,m,q;
char f[10][10];
char a[10][10][10];
int main()
{
    cin>>n>>m>>q;
    map<int,int>mp;
    int sum=n*m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>f[i][j];
            if(f[i][j]=='1')
                sum--;
        }
    }
    for(int k=0;k<q;k++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[k][i][j];
                if(a[k][i][j]=='1'&&f[i][j]=='1')
                mp[k]=1;
            }
        }
    }
    int num=10;
    int ans[10];
    for(int x=0;x<128;x++)
    {
        int cnt=0,cnt2=0;
        string s="0000000";
        int y=x;
        for(int i=0;i<7;i++){
            if(y%2)
            s[i]='1';
            else
            s[i]='0';
            y/=2;
        }
        int flag=0;
        int res[10][10]={0};
        for(int k=0;k<s.size();k++)
        {
            if(s[k]=='1'&&mp[k]==1){
                flag=1;
                break;
            }
        }
        if(!flag){
        for(int k=0;k<s.size();k++)
        {
            if(s[k]=='1')
            {
                cnt2++;
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<m;j++)
                    {
                        if(res[i][j]==0&&a[k][i][j]=='1'){
                            res[i][j]=1;
                            cnt++;
                        }
                    }
                }
            }
        }
        if(cnt==sum){
            if(cnt2<num){
                num=cnt2;
                int k=0;
                for(int zzz=0;zzz<s.size();zzz++)
                {
                    if(s[zzz]=='1'){
                        ans[k++]=zzz;
                    }
                }
            }
        }
        }
    }
    cout<<num<<'\n';
    for(int i=0;i<num;i++)
    {
        cout<<ans[i]<<' ';
    }
    return 0;
}