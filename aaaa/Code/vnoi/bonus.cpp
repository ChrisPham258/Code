#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmx=1e2;

int n,k,ans=INT_MIN;
int a[nmx][nmx],dp[nmx][nmx];

void solve(){
    cin >> n >> k;

    for(int i=1;i<=n;++i)
        for(int j=1;j<=n;++j)
            cin >> a[i][j];

    for(int i=1;i<=n;++i)
        for(int j=1;j<=n;++j)
            dp[i][j] = dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1] + a[i][j];
    
    for(int i=k;i<=n;++i)
        for(int j=k;j<=n;++j)
            ans=max(ans,dp[i][j] - dp[i-k][j] - dp[i][j-k] + dp[i-k][j-k]);
    
    cout << ans;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    freopen("DEBUG.inp","r",stdin);
    freopen("DEBUG.out","w",stdout);
    solve();
    return 0;
}
    