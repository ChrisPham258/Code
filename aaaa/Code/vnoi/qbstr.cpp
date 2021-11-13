#include<bits/stdc++.h>
using namespace std;

#define ll long long
typedef pair<int, int> ii;

const int nmx=1e3;

string s,st;
ll dp[nmx][nmx];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
    string st,s;
    cin >> st >> s;
    int n=st.size(),m=s.size();
    st=' '+st;
    s=' '+s;

    for(int i=1;i<=n;++i)
        for(int j=1;j<=m;++j){
            if(st[i] == s[j])
                dp[i][j] = dp[i-1][j-1] + 1;
            else
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
        }
    cout << dp[n][m];
    return 0;
}

// #include <iostream>
// #include <string>
// #include <algorithm>
// #include <vector>
// using namespace std;

// int lcs(string &a, string &b) {
//     int m = a.size(), n = b.size();
//     a = ' ' + a;
//     b = ' ' + b;
//     vector< vector<int> > f(m+1, vector<int>(n+1, 0));

//     for (int i=1; i<=m; i++) 
//            for (int j=1; j<=n; j++) {
//         if (a[i] == b[j]) f[i][j] = f[i-1][j-1] + 1;
//         else f[i][j] = max(f[i-1][j], f[i][j-1]);
//     }
//     return f[m][n];
// }

// int main() {
//     ios::sync_with_stdio(false); cin.tie(0);
//     string a; cin >> a;
//     string b; cin >> b;
//     cout << lcs(a, b);
// }