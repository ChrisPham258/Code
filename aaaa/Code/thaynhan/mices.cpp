#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmx=2e5;

void solve(){
    int n;
    int a[nmx],b[nmx];  
    cin >> n;
    for(int i=0;i<n;++i)
        cin >> a[i];
    for(int i=0;i<n;++i)
        cin >> b[i];
    sort(a,a+n);
    sort(b,b+n);
    int ans=INT_MIN;
    for(int i=0;i<n;++i)
        ans=max(ans,abs(a[i]-b[i]));
    cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
    int t;
    cin >> t;
    while(t!=0){
        solve();
        --t;
    }
    return 0;
}
    