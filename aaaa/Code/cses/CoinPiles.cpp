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
    int t;
    cin >> t;
    while(t!=0){
        int a,b;
        cin >> a >> b;
        if((a+b)%3 == 0 && 2*a>=b && 2*b>=a)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        --t;
    }
    return 0;
}
    