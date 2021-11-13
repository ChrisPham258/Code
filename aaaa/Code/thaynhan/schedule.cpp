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
        int n,x;
        cin >> n >> x;
        if((n-1)*10 - (n-1)*x > 0)
            cout << (n-1)*10 - (n-1)*x << endl;
        else
            cout << 0 << endl;
        --t;
    }
    return 0;
}
    