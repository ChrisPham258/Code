#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmax=1e9;

int main(){
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
    ll f[1001];
    f[0]=1;
    f[1]=2;

    f(i,2,1001,1)
        f[i]=f[i-1]+f[i-2];
    
    ll ans=0;

    f1(i,0,31,1)
        if(f[i] %2 == 0)
            ans+=f[i];
    cout << ans;
    
    return 0;
}
    