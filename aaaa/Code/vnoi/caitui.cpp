#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmax=1e9;


void solve(ll n, ll W, ll w[], ll v[]){
    ll dp[n+1][W+1];
    
    f1(i,0,n,1)
    {
        f1(j,0,W,1)
        {
            if(i == 0 || j == 0)
                dp[i][j] = 0;
            else if(j < w[i])
                dp[i][j] = dp[i-1][j];
            else
                dp[i][j] = max(dp[i-1][j] , v[i] + dp[i-1][j - w[i]]);
        }
    }
    
    cout << dp[n][W];
}
int main(){
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
    ll n,W;
    cin >> n >> W;
    ll w[n],v[n];

    f1(i,1,n,1)
        cin >> w[i] >> v[i];

    solve(n,W,w,v);
    return 0;
}
    