#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N =5050;
int n,m;
ll mod;
ll ans=0;
ll arr[N][N];
ll qmi(ll a,ll b){
    ll res=1;
    while(b){
        if(b&1){
            res=res*a%mod;
        }
        a=a*a%mod;
        b>>=1;
    }
    return res;
}

void init()//列举组合数
{
    for(int i=1;i<N;i++)
        arr[i][0]=1;
    arr[1][1]=1;
    for(int i=2;i<N;i++)
        for(int j=1;j<=i;j++)
            arr[i][j] =(arr[i-1][j-1] + arr[i-1][j])%mod;
}
ll c(int k,int n)
{
    return arr[k][n];
}
int main()
{
    cin>>n>>m>>mod;
    init();
    for(int k=1;k<=n;k++)
    {
        ans=ans+c(n,k)%mod*(qmi((qmi(2,k)-1)%mod,m-1)%mod*qmi(2,(n-k)*(m-1))%mod);
        ans%=mod;
        //(ans += c(n,k) * qmi(2,(n-k)*(m-1))%mod * qmi(((qmi(2,k)-1)%mod),m-1)%mod)%=mod;
    }
    cout<<ans;
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// const int N = 5050;
// int mod,n,m;
// int qmi(int a, int b)//快速幂
// {
//     int res = 1;
//     while (b)
//     {
//         if (b & 1)
//             res = res * a % mod;
//         a = a * a % mod;
//         b >>= 1;
//     }
//     return res;
// }
// int arr[N][N];
// void init()//列举组合数
// {
//     arr[1][1] = 1;
//     for(int i=2;i<N;i++)
//         for(int j=1;j<=i;j++)
//             arr[i][j] =(arr[i-1][j-1] + arr[i-1][j])%mod;
// }
// int C(int n, int m)
// {
//     return arr[n+1][m+1];
// }

// signed main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);
//     cin>>n>>m>>mod;
//     init();
//     int ans = 0;
//     for(int k=1;k<=n;k++)
//     {
//         (ans += C(n,k) * qmi(2,(n-k)*(m-1))%mod * qmi(((qmi(2,k)-1)%mod),m-1)%mod)%=mod;
// //      C(k,n)*2^(n-k)(m-1)*(2^k-1)^m-1;
// //      cout<<ans<<endl;
//     }
//     cout<<ans<<endl;
//     return 0;
// }
// //k=1   10 12 14 16 01 21 41 61
// //k=2   11 13 31 51 15 17 71 35 53 
