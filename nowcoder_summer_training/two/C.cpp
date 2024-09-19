#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
const int N = 1e6 + 10;
char ch[5][N];
ll dp[5][N], a[N];
ll n, ans;
int main()
{
    cin >> n;
    for (int i = 1; i <= 2; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> ch[i][j];
            if (ch[i][j] == 'R') {
                a[j]++;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (i == 1) {
            if (a[i] == 2) {
                dp[1][1] = 1;
                dp[2][1] = 1;
                ans = 1;
            }
            continue;
        }
        if (a[i] == 2) {
            if (a[i - 1] == 2) {
                dp[1][i] = dp[2][i - 1] + 2;
                dp[2][i] = dp[1][i - 1] + 2;
            }
            else if (a[i - 1] == 0) {
                dp[1][i] = 1;
                dp[2][i] = 1;
            }
            else {
                if (ch[1][i-1] == 'R') {
                    dp[1][i] = dp[1][i - 1] + 1;
                    dp[2][i] = dp[1][i - 1] + 2;
                }
                else {
                    dp[1][i] = dp[2][i - 1] + 2;
                    dp[2][i] = dp[2][i - 1] + 1;
                }
            }
        }
        else if (a[i] == 1) {
            if (ch[1][i] == 'R') {
                if (ch[1][i - 1] == 'R')
                    dp[1][i] = dp[1][i - 1] + 1;
                else
                    dp[1][i] = 0;
                dp[2][i] = 0;
            }
            else {
                if (ch[2][i - 1] == 'R')
                    dp[2][i] = dp[2][i - 1] + 1;
                else
                    dp[2][i] = 0;
                dp[1][i] = 0;
            }
        }
        else if (a[i] == 0) {
            dp[1][i] = 0;
            dp[2][i] = 0;
        }
        ans = max(ans, dp[1][i]);
        ans = max(ans, dp[2][i]);
    }
    cout << ans;
    return 0;
}