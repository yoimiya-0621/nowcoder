#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
const ll mod=1e9+7;
const int N=1e5+10;
char a[N];
ll x,y;
char ch;
int main()
{
    int T;
    cin>>T;
    while(T--){
        cin>>n>>x>>y;
        ll w=0,s=0,a=0,d=0;
        string str;
        cin>>str;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='U')
                w++;
            else if(str[i]=='D')
                s++;
            else if(str[i]=='L')
                a++;
            else
                d++;
        }
        int dy=d-a,dx=w-s;
        if(dx>=x){
            if(dx-x<=w){
                if(dy>y){
                    if(dy-y<=d){
                        cout<<"YES"<<'\n';
                    }
                    else
                        cout<<"NO"<<'\n';
                }
                else{
                    if(y-dy<=a){
                        cout<<"YES"<<'\n';
                    }
                    else
                    cout<<"NO"<<'\n';
                }
            }
            else
            cout<<"NO"<<'\n';
        }
        else{
            if(x-dx<=s){
                if(dy>=y){
                    if(dy-y<=d){
                        cout<<"YES"<<'\n';
                    }
                    else
                        cout<<"NO"<<'\n';
                }
                else{
                    if(y-dy<=a){
                        cout<<"YES"<<'\n';
                    }
                    else
                    cout<<"NO"<<'\n';
                }
            }
            else
            cout<<"NO"<<'\n';
        }
    }
    return 0;
}