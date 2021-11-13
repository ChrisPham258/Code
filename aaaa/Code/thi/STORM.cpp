#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmx=2e5;

int n,k;
ll a[nmx];
ll dp[nmx];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    freopen("STORM.INP","r",stdin);
    freopen("STORM.OUT","w",stdout);
    cin >> n >> k;
    for(int i=0;i<k;++i)
        a[i]=i+1;
    dp[0]=1;

    for(int j=0;j<k;++j)
        for(int i=1;i<=n;++i)
            if(a[j]<=i)
                dp[i]=(dp[i]+dp[i-a[j]])%(int)1e9;

    cout << dp[n];
    return 0;
}
    