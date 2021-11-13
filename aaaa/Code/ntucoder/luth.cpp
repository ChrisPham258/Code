#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmax=1e9;


void solve(int n, int W, int w[], int v[]){
    int dp[n+1][W+1];
    
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
    int n,W;
    cin >> n >> W;
    int w[n],v[n];

    f1(i,1,n,1)
        cin >> w[i] >> v[i];

    solve(n,W,w,v);
    return 0;
}
    