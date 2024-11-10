#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N =1e5+10;
int a,b,c,d;
int ans=0;
int w(int x)
{
    if(x==0)
        return 1;
    int res=1;
    while(x>9){
        x/=10;
        res++;
    }
    return res;
}
void solve()
{
    cin>>a>>b>>c>>d;
    int sum1=a+c;
    int sum2=b+d;
    string s1,s2;
    while(sum2){
        s2+=sum2%10+'0';
        sum2/=10;
    }
    while(sum1){
        s1+=sum1%10+'0';
        sum1/=10;
    }
    while(s1.size()<s2.size())s1+='0';
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());

    int sum=0,ans=0;
    for(int i=0;i<s2.size();i++)
    {
        if(s1[i]==s2[i])
            sum+=s2[i]-'0';
        else{
            ans=sum-1+s2[i]-'0'+9*(s2.size()-i-1);
            sum+=s2[i]-'0';
        }
    }
    cout<<max(ans,sum)<<'\n';
}
signed main ()
{
    int _=1;
    cin>>_;
    while(_--)
    {
        solve();
    }
    return 0;
}