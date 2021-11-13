#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmax=1e2;

ll n,W;
ll w[nmax],v[nmax];
ll dp[nmax][nmax];

void solve(){
    cin >> n >> W;

    f1(i,1,n,1)
        cin >> w[i] >> v[i];

    f1(i,0,n,1)
        f1(j,0,W,1){
            if(i == 0 || j == 0)
                dp[i][j] = 0;
            else if(j < w[i])
                dp[i][j] = dp[i-1][j];
            else
                dp[i][j] = max(dp[i-1][j], dp[i-1][j - w[i]] + v[i]);
        }

    cout << dp[n][W];        
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    freopen("DEBUG.inp","r",stdin);
    freopen("DEBUG.out","w",stdout);
    solve();
    return 0;
}
    