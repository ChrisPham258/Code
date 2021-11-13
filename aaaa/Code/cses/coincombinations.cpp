#include<bits/stdc++.h>
using namespace std;

#define ll long long
typedef pair<int, int> ii;

const int nmx=1e6+1,M=1e9+7;

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
    
    dp[0]=1;

    for(int j=0;j<n;++j)
        for(int i=0;i<=k;++i){
            if(a[j]<=i)
                dp[i]=(dp[i]+dp[i-a[j]])%M;
    }
        cout << dp[k];
    return 0;
}
    