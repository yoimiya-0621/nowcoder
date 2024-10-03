#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e5+10;
ll a[N],x,n,sum;
int main()
{
    cin>>n>>x;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(x>0){
            x-=a[i];
            sum+=a[i];
        }
        else if(x<0)
        {
            x+=a[i];
            sum+=a[i];
        }
        if(x==0)
            break;
    }
    cout<<sum;
    return 0;
}