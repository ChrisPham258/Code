#include<bits/stdc++.h>
using namespace std;

#define ll long long
typedef pair<int, int> ii;

const int nmx=1e3+1,M=1e9+7;

int n;
int a[nmx][nmx];
int dp[nmx][nmx];

void solve(){
    cin >> n;
    for(int i=1;i<=n;++i)
        for(int j=1;j<=n;++j)
            cin >> a[i][j];

    for(int i=2;i<=n;++i)
        dp[0][i] = dp[i][0] = M;

    for(int i=1;i<=n;++i)
        for(int j=1;j<=n;++j)
            dp[i][j] = min(dp[i-1][j],dp[i][j-1])+a[i][j];
    cout << dp[n][n];
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    freopen("DUONGDI.INP","r",stdin);
    freopen("DUONGDI.OUT","w",stdout);
    solve();
    return 0;
}
    