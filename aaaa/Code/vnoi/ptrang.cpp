#include<bits/stdc++.h>
using namespace std;

#define ll long long
typedef pair<int, int> ii;

const int nmx=2e5;

int n,l;
int a[nmx];
int dp[nmx];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
    cin >> n >> l;
    for(int i=1;i<=n;++i){
        int x;cin >> x;
        a[i]=a[i-1]+x;
        dp[i]=l;
    }

    for(int i=1;i<=n;++i)
        for(int j=i-1;j>=0;--j){
            if(a[i]-a[j] <= l)
                dp[i]=min(dp[i],max(dp[j],l-a[i]+a[j]));
            else
                break;
        }
    cout << dp[n];
    return 0;
}
    