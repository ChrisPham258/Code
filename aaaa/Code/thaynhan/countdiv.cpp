#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmax=1e9;

int dem(int l,int r, int a){
    while(l % a != 0)
        ++l;
    while(r%a != 0)
        --r;
    return (r-l)/a + 1;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
    int t;
    cin >> t;
    while(t!=0){
          int l,r,a,b,f1,f2;
          cin >> l >> r >> a >> b;
          int x = a*b/(__gcd(a,b));
          f1=r/a + r/b - r/x;
          f2=(l-1)/a + (l-1)/b - (l-1)/x;
          cout << f1-f2 << endl;
        --t;
    }
    return 0;
}
    