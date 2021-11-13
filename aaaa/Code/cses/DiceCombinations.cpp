#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmx=1e6+1,M=1e9+7;

int n;
ll dp[nmx];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
    cin >> n;
    dp[0]=1;

    for(int i=1;i<=n;++i){
        for(int j=1;j<=min(6,i);++j)
                dp[i]=(dp[i]+dp[i-j])%M;
    }
    cout << dp[n];
    return 0;
}
    