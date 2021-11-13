// // #include<bits/stdc++.h>
// // using namespace std;

// // #define ll long long
// // #define f(i, a, b, c) for (int i = a; i < b; i+=c )
// // #define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
// // #define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

// // const int nmax=1e5;

// // ll n,k;
// // ll a[nmax],dp[nmax];

// // void solve(){
// //     cin >> n >> k;

// //     f(i,0,n,1)
// //         cin >> a[i];

// //     dp[0]=0;
// //     dp[1] = abs(a[0] - a[1]);

// //     f(i,2,n,1){

// //         if(i<k){
// //             dp[i] = abs(a[0] - a[i]);
// //             f(j,1,i,1)
// //                 dp[i] = min(dp[i], abs(a[j] - a[i]) + dp[j]);
// //         }
// //         else{
// //             dp[i] = abs(a[i-k] - a[i]) + dp[i-k];
// //             f(j,i-k+1,i,1)
// //                 dp[i] = min(dp[i], abs(a[j] - a[i]) + dp[j]);
// //         }
// //     }
    
// //     cout << dp[n-1];
// // }
// // int main(){
// //     ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
// //     // freopen("DEBUG.inp","r",stdin);
// //     // freopen("DEBUG.out","w",stdout);
// //     solve();
// //     return 0;
// // }
    
    
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmax=1e5;

int n,k;
int a[nmax];
int dp[nmax];

void solve(){
    cin >> n >> k;
    f(i,0,n,1)
        cin >> a[i];

    dp[0] = 0;
    dp[1] = abs(a[1] - a[0]);
    
    f(i,2,n,1){
        if(i<k){
            dp[i] = abs(a[i] - a[0]);
            f(j,1,k,1)
                dp[i] = min( dp[i], abs(a[i]- a[j]) + dp[j] );
        }
        else{
            dp[i] = abs(a[i] - a[i-k]) + dp[i-k];
            f(j,i-k+1,i,1)
                dp[i] = min( dp[i], abs(a[i] - a[j]) + dp[j] );
        }
    }
    cout << dp[n-1];
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    freopen("DEBUG.inp","r",stdin);
    freopen("DEBUG.out","w",stdout);
    solve();
    return 0;
}
    