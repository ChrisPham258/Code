#include<bits/stdc++.h>
using namespace std;

#define ll long long
typedef pair<int, int> ii;

const int nmx=1e6+1;

int n,k;
ll a[nmx];
ll dp[nmx];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
    cin >> n >> k;
    for(int i=0;i<n;++i)
        cin >> a[i];
    
    dp[0]=0;
    for(int i=1;i<=k;++i){
        dp[i]=1e9;
        for(int j=0;j<n;++j)
            if(a[j]<=i)
                dp[i]=min(dp[i],dp[i-a[j]] + 1);
    }
    if(dp[k] >= 1e9)
        cout << -1;
    else
        cout << dp[k];
    return 0;
}
    