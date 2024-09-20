#include <bits/stdc++.h>
using namespace std;
const int N =1e6+10;
int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int dp[N]={0};
	char dp2[N]={0};
	for(int i=0;i<n;i++)
	{
		if(i==0){
			dp[i]=1;
			dp2[i]=s[i];
			continue;
		}
		if(s[i]=='c'&&dp2[i-1]=='f'){
			dp[i]=dp[i-1]-1;
			dp2[i]=dp2[i-2];
			continue;
		}
		if(s[i]=='b'&&dp2[i-1]=='t'){
			dp[i]=dp[i-1]-1;
			dp2[i]=dp2[i-2];
			continue;
		}
		dp[i]=dp[i-1]+1;
		dp2[i]=s[i];
	}
	cout<<dp[n-1];
	return 0;
}