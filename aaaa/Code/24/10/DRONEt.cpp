#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmax=1e9;

int n,K;
int a[3005],b[105];
int dp[3005][105];

void nhap(){
    cin >> n >> K;
    f1(i,1,n,1)
        cin >> a[i];
    f1(i,1,n,1)
        cin >> b[i];
}

// void solve(){
//     nhap();

//     f1(i,0,n,1)
//         f1(j,0,k,1)
//             dp[i][j] = -1e9;

//     dp[1][0] = 1;

//     f1(i,2,n,1)
//         f1(K,1,k,1)
//             for(int j = i-1; j>=i-50 && j >=1 ; --j){
//                 if(j + n[j] >= i)
//                     dp[i][k] = max(dp[i][K] , dp[j][K-1] + c[i]);
//             }

//     f1(i,0,n,1){
//         f1(j,0,k,1)
//             cout << dp[i][j] << " ";
//         cout << endl;
//     }
// }

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    freopen("DEBUG.inp","r",stdin);
    freopen("DEBUG.out","w",stdout);
    
    nhap();

    for(int i=0;i<=n;++i)
        for(int j=0;j<=K;++j)
            dp[i][j] = -1;

    dp[1][0] = a[1];

    for(int i=2;i<=n;++i)
        for(int k=1;k<=K;++k)
            for(int j = i-1; j>=i-50 && j >=1 ; --j){
                if(j + b[j] >= i)
                    dp[i][k] = max(dp[i][k] , dp[j][k-1] + a[i]);
            }
    int ans=-1e9;
    f1(k,1,K,1)
        ans=max(ans,dp[n][k]);
    cout << ans;
    return 0;
}
    