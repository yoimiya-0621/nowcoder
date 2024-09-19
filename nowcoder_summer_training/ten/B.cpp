// #include <bits/stdc++.h>
// using namespace std;
//     map<string,string>mp;
// void f(string type,string name)
// {
//     mp[name]=type;
//     if(type.find("pair")!=-1)
//     {
//         string l,r;
//         int flag=0;
//         int ok=0;
//         for(int i=5;i<type.size()-1;i++)
//         {
//             if(type[i]=='p')
//             ok++;
//             if(type[i]==','&&ok==0)
//             {
//                 flag=1;
//                 continue;
//             }
//             if(type[i]==',')
//             ok--;
//             if(flag==0){
//                 l+=type[i];
//             }
//             else{
//                 r+=type[i];
//             }
//         }
//         f(l,name+".first");
//         f(r,name+".second");
//     }
// }
// void solve()
// {
//     int n,q;
//     cin>>n>>q;
//     string type,name;
//     char ch;
//     for(int i=0;i<n;i++)
//     {
//         cin>>type;
//         string name;
//         while(cin>>ch)
//         {
//             if(ch==';')
//             break;
//             name+=ch;
//         }
//         f(type,name);
//     }
//     while(q--)
//     {
//         cin>>name;
//         cout<<mp[name]<<'\n';
//     }
// }
// int main()
// {

//     solve();
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
map<string,string>mp;
    string type,name;
    char ch;
        int flag=0;
        int ok=0;
void f(string type,string name)
{
    mp[name]=type;
    if(type.find("pair")!=-1)
    {
        string l,r;

        l="",r="";
        flag=0;
        ok=0;
        for(int i=5;i<type.size()-1;i++)
        {
            if(type[i]=='p')
            ok++;
            if(type[i]==','&&ok==0)
            {
                flag=1;
                continue;
            }
            if(type[i]==',')
            ok--;
            if(flag==0){
                l+=type[i];
            }
            else{
                r+=type[i];
            }
        }
        f(l,name+".first");
        f(r,name+".second");
    }
}
void solve()
{
    int n,q;
    cin>>n>>q;

    for(int i=0;i<n;i++)
    {
        cin>>type;
        name="";
        while(cin>>ch)
        {
            if(ch==';')
            break;
            name+=ch;
        }
        f(type,name);
    }
    while(q--)
    {
        cin>>name;
        cout<<mp[name]<<'\n';
    }
}
int main()
{
    solve();
    return 0;
}