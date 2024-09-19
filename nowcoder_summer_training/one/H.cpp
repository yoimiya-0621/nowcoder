// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// const int N=1e5+10;
// struct A{
//     string s;
//     ll count;
//     ll p;
// }a[N],b[N];
// map<string,int>mp;
// bool cmp(A a,A b){
//     if(a.count==b.count)
//     return a.p<b.p;
//     else
//     return a.count>b.count;
// }
// int main()
// {
//     int n,m,x=0,y=0,k1=0,k2=0;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i].s>>a[i].count>>a[i].p;
//         mp[a[i].s]+=1;
//     }
//     cin>>m;
//     for(int i=0;i<m;i++)
//     {
//         cin>>b[i].s>>b[i].count>>b[i].p;
//         mp[b[i].s]+=1;
//     }
//     sort(a,a+n,cmp);
//     sort(b,b+m,cmp);
//     for(int i=0;i<n;i++)
//     {
//         if(a[i].s=="lzr010506")
//         {x=i+1;break;}
//         if(mp[a[i].s]==2)
//         k1++;

//     }
//     for(int i=0;i<m;i++)
//     {
//         if(b[i].s=="lzr010506")
//         {y=i+1;break;}
//         if(mp[b[i].s]==2)
//         k2++;
        
//     }
//     x-=k1;
//     y-=k2;
//     cout<<min(x,y);
//     return 0;
// }

