#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmax=1e9;

int main(){
    freopen("DEBUG.inp","r",stdin);
    freopen("DEBUG.out","w",stdout);
    int x,n;
    cin >> x >> n;
    int a[n],ans=x;

    for(int i=0;i<n;++i){
        cin >> a[i];
        ans+= (x- a[i]);
    }
    cout << ans;
    return 0;
}
    