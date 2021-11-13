#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmax=1e9;
int dp[100001];
int main(){
    freopen("DEBUG.inp","r",stdin);
    freopen("DEBUG.out","w",stdout);
    int n;
    cin >> n;
    int a[100001];

    f(i,0,n,1)
        cin >> a[i];

    dp[0]=0;
    dp[1]=abs(a[1] - a[0]);
    f(i,2,n,1)
        dp[i] = min(dp[i-1] + abs(a[i-1] - a[i]) , dp[i-2] + abs(a[i] - a[i-2]) );
    cout << dp[n-1];
    return 0;
}
    