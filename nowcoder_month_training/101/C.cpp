#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<0;
    }
    else if(n==2){
        cout<<2;
    }
    else if(n==3){
        cout<<4;
    }
    else if(n%2==0)
        cout<<4;
    else{
        cout<<6;
    }
    return 0;
}