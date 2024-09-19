#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
const int mod=1000000007;
const int N=1e6+100;
//Mio,Let's go!!!============================================
void solve()
{
	int m,k,h;
	cin>>m>>k>>h;
	int c=m-k;
	if(m==k)
	cout<<1<<endl;
	else
	{
		int x=h/m;
		int ans1=h-k*x;
		int ans2=(k-m)*x;
		int ans=max(ans1,ans2);
		cout<<ans<<endl;
	}
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	
    int T = 1;
    cin >> T;
    
    while (T--) {
    	cout<<fixed<<setprecision(10);
        solve();
	}
    
	return 0;
 } 
