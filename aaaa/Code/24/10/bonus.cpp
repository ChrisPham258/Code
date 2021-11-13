#include<bits/stdc++.h>
using namespace std;
 

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmax=1e4;

ll dp[nmax][nmax];
ll a[nmax][nmax];
int main(){
    freopen("DEBUG.inp","r",stdin);
    freopen("DEBUG.out","w",stdout);
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n,k;
    cin >> n >> k;
    ll ans=0;

    f1(i,1,n,1)
        f1(j,1,n,1)
            cin >> a[i][j];

    f1(i,1,n,1)
        f1(j,1,n,1)
            dp[i][j] = dp[i-1][j] + dp[i][j-1] 
                     - dp[i-1][j-1] + a[i][j];

    f1(i, k, n, 1) 
        f1(j, k, n, 1) 
        { 
           int thieu=dp[i-k][j-k];
           int up=dp[i-k][j];
           int left=dp[i][j-k];
           ans=max(ans,dp[i][j] - up - left + thieu); 
        }
    cout << ans; 
    return 0;
}
    
