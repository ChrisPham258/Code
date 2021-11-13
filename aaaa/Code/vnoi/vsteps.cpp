#include<bits/stdc++.h>
using namespace std;

#define ll long long
typedef pair<int, int> ii;

const int nmx=2e5,M=14062008;

int n,m;
bool a[nmx];
int dp[nmx];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
    cin >> n >> m;
    for(int i=1;i<=m;++i){
        int x;
        cin >> x;
        a[x]=1;
    }
    dp[0]=0;
    dp[1]=1;  
    for(int i=2;i<=n;++i){
        dp[i]=(dp[i-1]*(1-a[i-1]) + dp[i-2]*(1-a[i-2])) % M;
    }
    cout << dp[n];
    return 0;
}
    