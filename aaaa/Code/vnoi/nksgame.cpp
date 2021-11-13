#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmx=2e5;

int n;
int ans=INT_MAX;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    freopen("DEBUG.inp","r",stdin);
    freopen("DEBUG.out","w",stdout);
    cin >> n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;++i)
        cin >> a[i];
    for(int i=0;i<n;++i)
        cin >> b[i];
    sort(a.begin(),a.end());

    for(int b : b){
        auto x=lower_bound(a.begin(),a.end(),-b);
        if (x != a.end()) ans = min(ans, abs(b + *x));
        if (x != a.begin()) ans = min(ans, abs(b + *(x-1)));
    }
    cout << ans;
    return 0;
}
    