#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    while(s.find("fc")!=-1||s.find("tb")!=-1)
    {
        if(s.find("fc")!=-1)
        {
            s.erase(s.find("fc"),2);
        }
       else if(s.find("tb")!=-1)
        {
            s.erase(s.find("tb"),2);
        }
    }
    cout<<s.size();
    return 0;
}