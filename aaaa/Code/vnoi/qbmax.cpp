#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmax=1e9;

int n,m,ans=INT_MIN;
int a[105][105],f[105][105];

void solve(){
    cin >> n >> m;
    
    f1(i,1,n,1)
        f1(j,1,m,1)
            cin >> a[i][j];

    f1(j,1,m,1)
        f1(i,1,n,1){
                int r =f[i+1][j-1];
                int c1=f[i][j-1];
                int c2=f[i-1][j-1];
                f[i][j] = max(r,max(c1,c2)) + a[i][j];
        }
    f1(i,1,n,1)
        ans=max(ans,f[i][m]);
    cout << ans;
}
int main(){
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
    solve();
    return 0;
}
    