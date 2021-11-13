#include<bits/stdc++.h>
using namespace std;

#define ll long long
typedef pair<int, int> ii;

const int nmx=1e3+1;

string s,st;
int dp[nmx][nmx];

void solve(){
    cin >> st >> s;

    for(int i=1;i<=st.size();++i)
        for(int j=1;j<=s.size();++j)
            if(st[i-1] == s[j-1])
                dp[i][j] = dp[i-1][j-1]+1;
            else
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);

    string ans="";
    int i=st.size(),j=s.size();
    while(i!=0 && j!=0){
        if(dp[i-1][j] == dp[i][j])
            --i;
        else if(dp[i][j-1] == dp[i][j])
            --j;
        else{
            ans=s[j-1]+ans;
            --i,--j;
        }
    }
    cout << ans;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    freopen("DEBUG.inp","r",stdin);
    freopen("DEBUG.out","w",stdout);
    solve();
    return 0;
}
    