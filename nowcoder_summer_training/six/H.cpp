#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        int flag1=0;
        int flag2=0;
        int ok=1;
        stack<char>v;
        v.push('U');
        for(int i=0;i<s.size();i++)
        {
            flag2++;
            if(s[i]=='3')
            {
                flag1++;
            }
            else if(s[i]=='5'||s[i]=='U')
            {
                flag2=0;
                flag1=0;
                if(v.top()=='5'&&s[i]=='5')
                {
                    ok=0;
                    break;
                }
                v.push(s[i]);
            }
            else if(s[i]=='4')
            {
                flag1=0;
            }
            if(flag1>=10||flag2>=90)
            {
                ok=0;
                break;
            }
        }
        if(ok)
        cout<<"valid"<<'\n';
        else
        cout<<"invalid"<<'\n';
    }
    return 0;
}