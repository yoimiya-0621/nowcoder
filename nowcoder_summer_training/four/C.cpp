#include <bits/stdc++.h>
using namespace std;
const int N=1e6+10;
int a[N];
int n;
int ans=0;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        ans=0;
        cin>>n;
        for(int  i=1;i<=n;i++)
        cin>>a[i];
        vector<int>v;
        int v2=0;
        map<int,int>mp;
        for(int i=1;i<=n;i++)
        {
            if(mp[i]==1)
                continue;
            if(a[i]==i)
                mp[i]=1;
            else{
                int k=1;
                for(int j=a[i];j!=i;j=a[j])
                {
                    k++;
                    mp[j]=1;
                }
                if(k>=4)
                {
                    if(k==4)
                        ans++;
                    else 
                    {
                        if((k-1)%3==0)
                        {
                        ans+=(k-1)/3;
                        }
                        else{
                        ans+=(k-1)/3;
                            if((k-(k-1)/3*3)%4==2){
                                v2++;
                            }
                            else
                                ans++;
                        }
                    }
                }
                else
                {
                    if(k==3)
                    ans++;
                    else
                    v2++;
                }
            }
        }
        ans+=v2/2+v2%2;
        cout<<ans<<'\n';
    }
    return 0;
}