#include<bits/stdc++.h>
using namespace std;

#define ll long long
typedef pair<int, int> ii;

const int nmx=1e3;

int n,m;
ll h[nmx],s[nmx];
ll dp[nmx][nmx];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
    cin >> n >> m;

    for(int i=0;i<n;++i)
        cin >> h[i];
    for(int i=0;i<n;++i)
        cin >> s[i];

    for(int i=0;i<=n;++i)
        for(int j=0;j<=m;++j){
            if(i == 0 || j == 0)
                dp[i][j] = 0;
            else if(j < h[i])
                dp[i][j] = dp[i-1][j];
            else
                dp[i][j]=max(dp[i-1][j], dp[i-1][j-h[i]] + s[i]);
        }
    cout << dp[n][m];
    return 0;
}
