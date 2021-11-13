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
    int n,ans=0;
    cin >> n;
        int t[n],f[n];
        int r[n];

        f1(i,1,n,1)
            cin >> t[i];

        f1(i,1,n-1,1)
            cin >> r[i];

        f[0]=0;
        f[1]=t[1];
        for(int i=2;i<=n;++i)
            f[i] = min(f[i-1] + t[i], f[i-2] + r[i-1]);
        cout << f[n];
    return 0;
}
    