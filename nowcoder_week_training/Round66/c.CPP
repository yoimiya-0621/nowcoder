#include <bits/stdc++.h>
using namespace std;
int n;
int a[3];
void solve()
{
    string s;
    cin>>s;
    int n =s.size();
    s=s+s;
    vector<string>v;
    for(int i=0;i<n;i++)
    {
        string str;
        for(int j=i;j-i<n;j++)
        {
            str+=s[j];
        }
        v.push_back(str);
    }
    sort(v.begin(),v.end());
    cout<<v[0]<<'\n';
}
int main()
{
    int _=1;
    cin>>_;
    while(_--)
    {
        solve();
    }
    return 0;
}