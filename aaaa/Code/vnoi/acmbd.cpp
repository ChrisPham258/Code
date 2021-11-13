#include<bits/stdc++.h>
using namespace std;

#define ll long long
typedef pair<int, int> ii;

const int nmx=1e6;

int n,ans;
int a[nmx];

void solve(){
    cin >> n;
    for(int i=0;i<2*n;++i){
        int x,y;
        cin >> x >> y;
        ans+=x;
        a[i]=y-x;
    }
    sort(a+0,a+0+2*n);
    for(int i=0;i<n;++i)
        ans+=a[i];
    cout << ans;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    freopen("DEBUG.inp","r",stdin);
    freopen("DEBUG.out","w",stdout);
    solve();
    return 0;
}
    