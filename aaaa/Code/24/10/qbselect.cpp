#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmax=1e5;

int n;
int a[4][nmax];
int dp[4][nmax+1];

void solve(){
    cin >> n;

    f(i,0,4,1)
        f1(j,1,n,1){
            cin >> a[i][j];
        }
    f(i,0,4,1){
        f1(j,1,n,1){
            cout <<  a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    dp[0][0] = a[0][0];
    dp[1][0] = a[1][0];
    dp[2][0] = a[2][0];
    dp[3][0] = a[3][0];

        f1(j,1,n,1){
            dp[0][j] = a[0][j] + max(dp[1][j-1],max(dp[2][j-1],dp[3][j-1]));
            dp[1][j] = a[1][j] + max(dp[2][j-1],max(dp[0][j-1],dp[3][j-1]));
            dp[2][j] = a[2][j] + max(dp[1][j-1],max(dp[0][j-1],dp[3][j-1]));
            dp[3][j] = a[3][j] + max(dp[1][j-1],max(dp[2][j-1],dp[0][j-1]));
            cout << dp[0][j] << " " << dp[1][j] << " " << dp[2][j] << " " << dp[3][j] << endl;
        } 
    
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    freopen("DEBUG.inp","r",stdin);
    freopen("DEBUG.out","w",stdout);
    solve();
    return 0;
}
    