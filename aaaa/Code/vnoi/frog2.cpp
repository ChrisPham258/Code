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
    int n,k;
    cin >> n >> k;
    int a[100001];

    f(i,0,n,1)
        cin >> a[i];

    dp[0]=0;
    
    f(i,1,n,1)
        f(j,i-1,max(1,i-k),1)
            dp[i] = min(dp[i], dp[j] + abs(a[i] - a[j]) );
    cout << dp[n-1];
    return 0;
}
    