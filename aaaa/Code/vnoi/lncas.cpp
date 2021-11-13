#include<bits/stdc++.h>
using namespace std;

#define ll long long
typedef pair<int, int> ii;

const int nmx=1e3+1;

int n,m;
int a[nmx],b[nmx];
int dp[nmx][nmx];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
    cin >> n >> m;
    for(int i=1;i<=n;++i)
        cin >> a[i];
    for(int i=1;i<=m;++i)
        cin >> b[i];

    for(int i=1;i<=n;++i)
        for(int j=1;j<=m;++j)
            if(a[i] == b[j])
                dp[i][j] = dp[i-2][j-2] + 1;
            else
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
    
    cout << dp[n][m];
    return 0;
}
