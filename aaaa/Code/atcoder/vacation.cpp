// #include<bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define f(i, a, b, c) for (int i = a; i < b; i+=c )
// #define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
// #define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

// const int nmax=100005;

// ll n,a[nmax],b[nmax],c[nmax],dp[nmax];
// vector<int> aa;

// int M(ll A, ll B, ll C){
//     if ( max(A,max(B,C)) == A )
//         return 0;
//     else if ( max(A,max(B,C)) == B )
//         return 1;
//     else
//         return 2;
// }

// void check(){
//     int i=1,cmp;
//     cmp = M(a[0],b[0],c[0]);
//     aa.push_back(cmp);

//     while(i != n){
//         ll A = a[i];
//         ll B = b[i];
//         ll C = c[i];
//         if(cmp == 0)
//             A=0;
//         else if(cmp == 1)
//             B=0;
//         else
//             C=0;
//         cmp = M(A,B,C);
//         aa.push_back(cmp);
//         ++i;
//     }
// }
// void solve(){
//     cin >> n;

//     f(i,0,n,1)
//         cin >> a[i] >> b[i] >> c[i];

//     check();
    
//     dp[0]=max(a[0],max(b[0],c[0]));
    
//     f(i,1,n,1){
//         if(aa[i] == 0)
//             dp[i] = dp[i-1] + a[i];
//         else if(aa[i] == 1)
//             dp[i] = dp[i-1] + b[i];
//         else
//             dp[i] = dp[i-1] + c[i];
//     }
//     cout << dp[n-1];
// }
// int main(){
//     ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
//     // freopen("DEBUG.inp","r",stdin);
//     // freopen("DEBUG.out","w",stdout);
//     solve();
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmax=1e5;

ll n,a[nmax],b[nmax],c[nmax],dp[nmax][3];

void solve(){
    cin >> n;

    f(i,0,n,1)
        cin >> a[i] >> b[i] >> c[i];

    dp[0][0] = a[0];
    dp[0][1] = b[0];
    dp[0][2] = c[0];

    f(i,1,n,1){
        dp[i][0] = a[i] + max(dp[i-1][1] , dp[i-1][2] );
        dp[i][1] = b[i] + max(dp[i-1][0] , dp[i-1][2] );
        dp[i][2] = c[i] + max(dp[i-1][1] , dp[i-1][0] );
    }

    cout << max( max(dp[n-1][1], dp[n-1][2]) ,dp[n-1][0]);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    freopen("DEBUG.inp","r",stdin);
    freopen("DEBUG.out","w",stdout);
    solve();
    return 0;
}
    