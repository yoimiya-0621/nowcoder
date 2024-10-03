#include <bits/stdc++.h>
using namespace std;
int n,k,sum;
double ans;
const int N=1E5+10;
struct S{
    double x,y,r;
}v[N];
bool cmp(S a,S b)
{
    return (-sqrt(a.x*a.x+a.y*a.y)+a.r)*a.r*a.r<(-sqrt(b.x*b.x+b.y*b.y)+b.r)*b.r*b.r;
}
int main()
{
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>v[i].x>>v[i].y>>v[i].r;
        if(sqrt(v[i].x*v[i].x+v[i].y*v[i].y)<v[i].r){
            sum++;
        }
    }
    if(sum<=k){
        cout<<0;
        return 0;
    }
    sort(v,v+n,cmp);
    int flag=0;
    for(int i=0;i<n&&flag<sum-k;i++)
    {
        if(sqrt(v[i].x*v[i].x+v[i].y*v[i].y)<v[i].r){
            ans+=(-sqrt(v[i].x*v[i].x+v[i].y*v[i].y)+v[i].r)*v[i].r*v[i].r*3.1415926535;
            flag++;
        }
    }
    cout<<setprecision(12)<<ans;
    return 0;
}