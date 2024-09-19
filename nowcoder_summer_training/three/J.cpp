#include <iostream>
#include <map>
#include <vector>
using namespace std;
int a, n, b;
int wina, winb;
int WINA, WINB;
map<int, int>mp;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> n >> a >> b;
    cin >> s;
    int flag = 0, k = 0;
    map<int, int>mp1;
    map<int, int>mp2;
    for (int i = 0; i < n; i++)
    {
        wina = 0;
        winb = 0;
        for (int j = i;; j++)
        {
            j %= n;
            if (s[j] == '1')
                wina++;
            else
                winb++;
            if (wina >= a) {
                mp1[i] = j+1;
                mp2[i] = 2;
                break;
            }
            else if (winb >= a) {
                mp1[i] = j+1;
                mp2[i] = 1;
                break;
            }
        }
        
    }
    for (int i = 0; i < n; i++) {
        WINA = 0;
        WINB = 0;
        wina = 0;
        winb = 0;
        for (int j = i;;)
        {
            j %= n;
            if (mp1[j]) {
                if (mp2[j] == 2)
                    WINA++;
                else if (mp2[j] == 1)
                    WINB++;
                j = mp1[j];
            }
            if (WINA >= b) {
                flag = 1;
                break;
            }
            if (WINB >= b) {
                flag = 0;
                break;
            }
        }
        cout << flag;
    }
    return 0;
}