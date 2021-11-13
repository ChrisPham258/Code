// // // #include<bits/stdc++.h>
// // // using namespace std;

// // // #define ll long long
// // // #define f(i, a, b, c) for (int i = a; i < b; i+=c )
// // // #define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
// // // #define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

// // // const int nmax=1e9;

// // // int main(){
// // //     // freopen("DEBUG.inp","r",stdin);
// // //     // freopen("DEBUG.out","w",stdout);
// // //     int n;
// // //     cin >> n;
// // //     int a[1001];

// // //     f(i,0,n,1)
// // //         cin >> a[i];
    
// // //     int lmax;
// // //     int dp[1001];
// // //     dp[0] = 1;
// // //     for(int i=0;i<n;++i){
// // //         lmax=0;
// // //         f(j,0,i,1){
// // //             if(a[i] > a[j])
// // //                 if(dp[j] > lmax)
// // //                     lmax=dp[j];
// // //         }
// // //         dp[i] = lmax+1;
// // //     }

// // //     cout << endl;

// // //     for(int i=0;i<n;++i){
// // //         cout << a[i] << " "; 
// // //     }
// // //     cout << endl;

// // //     for(int i=0;i<n;++i){
// // //         cout << dp[i] << " ";
// // //     }
// // //     return 0;
// // // }

    
// // #include<bits/stdc++.h>
// // using namespace std;

// // #define ll long long
// // #define f(i, a, b, c) for (int i = a; i < b; i+=c )
// // #define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
// // #define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

// // const int nmax=1e9;

// // bool ktra(int n){
// //     // int cs[10];

// //     // for(int i=0;i<10;++i)
// //     //     cs[i] = 0;
    
// //     // while(n!=0){
// //     //     int x=n%10;
// //     //     ++cs[x];
// //     //     n/=10;
// //     // }

// //     // for (int i=0;i<10;++i)
// //     //     if (cs[i] > 1) 
// //     //         return false;

// //     // return true;
// //     bool kt;
// //     int a=sqrt(n);
// //     if (a*a==n) kt = 1;
// //     else kt = 0;
// //     return kt;
// // }

// // int main(){
// //     // freopen("DEBUG.inp","r",stdin);
// //     // freopen("DEBUG.out","w",stdout);
// //     int L;
// //     cin>>L;

// //     // f1(i,L,R,1){
// //     //     if (ktra(i) == true )
// //     //         { cout <<i;
// //     //            return 0;}
// //     // }
// //     // cout << -1;
// //    f1(i,1,L,1){
// //        if (ktra (i) ==1) cout<<i;
// //    }
// //     return 0;
// // }


#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s,s1,s2;
    cin>>s>>s1>>s2;
    int i=s.find(s1,0);
    s.erase(i,s1.size());
    s.insert(i,s2);
    cout<<s;
    return 0;
}

    