#include<bits/stdc++.h>
using namespace std;

#define ll long long
typedef pair<int, int> ii;

const int M=1e5;

ll dp[M],f[M];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
    ll t;
    cin >> t;

    dp[0]=0;
    dp[1]=1;
    f[0]=0;
    f[1]=1;
    for(int i=2;i<=M;++i){
        if(i%2 == 0)
            dp[i]=dp[i/2];
        else
            dp[i]=dp[i/2]+dp[i/2+1];
        f[i]=max(f[i-1],dp[i]);
    }

    while(t!=0){
        ll ans=0;
        ll n;
        cin >> n;
        cout << f[n] << endl;
        --t;
    }
    return 0;
}
    