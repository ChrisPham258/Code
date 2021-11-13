#include<bits/stdc++.h>
using namespace std;

#define ll long long
typedef pair<int, int> ii;

const int nmx=1e3+1,M=1e9+7;

int n;
ll dp[nmx][nmx];
string st[nmx];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
    cin >> n;

    for(int i=0;i<n;++i)
        cin >> st[i];

    dp[0][0]=1;
    for(int i=0;i<n;++i)
        for(int j=0;j<n;++j){
            if(i)
                dp[i][j]+=dp[i-1][j];
            if(j)
                dp[i][j]+=dp[i][j-1];
            dp[i][j]%=M;
            if(st[i][j] == '*')
                dp[i][j]=0;
        }

    cout << dp[n-1][n-1];
    return 0;
}
    