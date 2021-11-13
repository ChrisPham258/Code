#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int nmx = 5e4+5;

ll n,m,t;
ll a[nmx];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >> n >> m;
    for(int i=0;i<m;++i){
        ll u,v,k;
        cin >> u >> v >> k;
        for(int j=u;j<=v;++j)
            a[j]+=k;
    }
    cin >> t;
    for(int i=0;i<t;++i){
        ll u,v,ans=INT_MIN;
        cin >> u >> v;
        for(int j=u;j<=v;++j)
            ans=max(ans,a[j]);
        cout << ans << endl;
    }
    return 0;
}