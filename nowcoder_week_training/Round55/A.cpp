#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    if(s[0]==s[1]&&s[1]==s[2])
        cout<<0;
    else if(s[0]!=s[1]&&s[1]!=s[2]&&s[0]!=s[2])
        cout<<2;
    else
        cout<<1;
    return 0;
}