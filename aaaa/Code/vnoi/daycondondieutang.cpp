#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmax=3*1e4;

int n,lmax,M=-999999;
int a[nmax],dp[nmax];

void nhap(){
    cin >> n;
    f(i,0,n,1)
        cin >> a[i];
}
void solve(){
    nhap();

    dp[0]=1;
    f(i,1,n,1){
        lmax=0;
        f(j,0,i,1){
            if(a[i] > a[j])
                if(dp[j] > lmax){
                    lmax=dp[j];
                }
        }
        dp[i] = lmax+1;
        M=max(M,dp[i]);
    }

    f(i,0,n,1)
        cout << a[i] << " ";
    cout << endl;

    f(i,0,n,1)
        cout << dp[i] << " ";
    cout << endl;

    int i=n-1;
    while(1){
        
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    freopen("DEBUG.inp","r",stdin);
    freopen("DEBUG.out","w",stdout);
    solve();
    return 0;
}
    