// #include <bits/stdc++.h>
// using namespace std;
// int m,n;
// char a[550][550];
// int length,width;
// int main()
// {
//     cin>>n>>m;
//     for(int i=1;i<=n;i++)
//     {
//         int l=0;
//         int w=0;
//         for(int j=1;j<=n;j++)
//         {
//             cin>>a[i][j];
//             if(a[i][j]=='x')
//             {
//                 l++;
//                 w=1;
//             }
//         }
//         length=max(l,length);
//         width+=w;
//     }
//     int c=gcd(length,width);
//     length/=c;
//     width/=c;
//     for(int i=0;i<length;i++){
//     for(int j=0;j<width;j++)
//     {
//         cout<<'x';
//     }
//     cout<<'\n';
//     }
//     return 0;
// }