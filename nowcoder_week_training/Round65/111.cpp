#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N =1e3+10;
int n,m;
ll a[N][N];
char ch;
void solve()
{
	cin>>n>>m;
	int k=min(m,n)/2;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
            cin>>ch;
			a[i][j]=ch-'0';
		}
	}
	int x=1,y=1;
	ll ans=0;
	while(k--)
	{
		vector<pair<int,int>>v;
		for(int j=y;j<=m;j++)
			v.push_back({x,j});
		for(int i=x+1;i<=n-1;i++)
			v.push_back({i,m});
		for(int j=m;j>=y;j--)
			v.push_back({n,j});
		for(int i=n-1;i>=x+1;i--)
			v.push_back({i,y});
		v.push_back(v[0]);
		v.push_back(v[1]);
		v.push_back(v[2]);
		for(int z=0;z<v.size()-3;z++)
		{
			if(a[v[z].first][v[z].second]==1)
			{
				if(a[v[z+1].first][v[z+1].second]==5)
					if(a[v[z+2].first][v[z+2].second]==4)
						if(a[v[z+3].first][v[z+3].second]==3)
							ans++;
				
			}
		}
		x++,y++,n--,m--;
	}
	cout<<ans<<'\n';
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int _=1;
	cin>>_;
	while(_--)
	{
		solve();
	}
	return 0;
}