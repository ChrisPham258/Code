#include<bits/stdc++.h>
using namespace std;

#define ll long long
typedef pair<int, int> ii;

const int nmx=1e3+5;

int dp[nmx][nmx];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
    string s,st;
    cin >> s;
    st=s;
    reverse(st.begin(),st.end());

    int n=s.size();

    for(int i=1;i<=n;++i)
        for(int j=1;j<=n;++j)
            if(s[i-1] == st[j-1])
                dp[i][j] = dp[i-1][j-1] + 1;
            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
    // cout << s << endl << st << endl;
    //  for(int i=0;i<=n;++i){
    //     for(int j=0;j<=n;++j)
    //         cout << dp[i][j] << " ";
    //     cout << endl; 
    // }

    string ans="";
    int i=n,j=n;
    while(i != 0 && j != 0){
        if(dp[i-1][j] == dp[i][j])
            --i;
        else if(dp[i][j-1] == dp[i][j])
            --j;
        else{
            ans=s[i-1]+ans;
            --i,--j;
        }
    }
    cout << ans;
    return 0;
}
    