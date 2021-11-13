#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmax=2*1e1;

int n,m,M;
int a[nmax],b[nmax];
int dp[nmax][nmax];
vector<int> aa;

void nhap(){
    cin >> n >> m;
    f(i,0,n,1)
        cin >> a[i];
    f(i,0,m,1)
        cin >> b[i];
}

void trace(int n,int m){
    int i=n,j=m;
    while(i!=0 && j!=0){
        if(a[i] == b[j]){
            aa.push_back(b[j-1]);
            --i;
        }
            if(dp[i][j] == dp[i][j-1])
                --j;
            else
                --i;
    }
}

void solve(){
    nhap();

    f1(i,0,n,1)
        f1(j,0,m,1){
            if(i == 0 || j == 0)
                dp[i][j] = 0;
            else if(a[i] == b[j])
                dp[i][j] = max(dp[i-1][j], max(dp[i][j-1],dp[i-1][j-1])) + 1;
            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            M=max(M,dp[i][j]);
        }
        
    trace(n,m);

    cout << aa.size() << endl;
    f(i,0,aa.size(),1)
        cout << aa[i] << " ";
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    freopen("DEBUG.inp","r",stdin);
    freopen("DEBUG.out","w",stdout);
    solve();
    return 0;
}
