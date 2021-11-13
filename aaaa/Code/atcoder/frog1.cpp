#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmax=1e5;

ll n,a[nmax],dp[nmax];

void solve(){
    cin >> n;

    f(i,0,n,1)
        cin >> a[i];

    dp[0] = 0;
    dp[1] = abs(a[0] - a[1]);

    f(i,2,n,1)
        dp[i] = min(dp[i-1] + abs(a[i] - a[i-1])
                    ,dp[i-2] + abs(a[i] - a[i-2]));

    cout << dp[n-1];
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    freopen("DEBUG.inp","r",stdin);
    freopen("DEBUG.out","w",stdout);
    solve();
    return 0;
}
    