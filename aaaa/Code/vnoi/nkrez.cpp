#include<bits/stdc++.h>
using namespace std;

#define ll long long
typedef pair<int, int> ii;

const int nmx=2e5;

int n;
vector<ii> a;
int dp[nmx];

bool cmp(ii a, ii b){
    return a.second < b.second;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
    cin >> n;
    for(int i=0;i<n;++i){
        int p,k;
        cin >> p >> k;
        a.push_back({p,k});
    }   
    sort(a.begin(),a.end(),cmp);

    dp[0]=0;
    for(int i=1;i<n;++i){
        int j= lower_bound(a[i].first,a[n-1].first,a[i].second);
        dp[i]=max(dp[i-1],dp[j]+a[i].second-a[i].first);
    }
    cout << dp[n-1];
    return 0;
}
    