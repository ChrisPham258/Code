#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmax=1e9;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
    int t;
    cin >> t;
    while(t!=0){
        ll x,y,n,i=0;
        cin >> x >> y >> n;
        if(n%2 == 0)
            cout << max(x,y)/min(x,y) << endl;   
        else
            cout << max(2*x,y)/min(2*x,y) << endl;   
        --t;
    }
    return 0;
}
    