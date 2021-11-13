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
        int n;
        cin >> n;
        if(n == 1)
            cout << 6 << endl;
        if(n == 2)
            cout << 5 << endl;
        if(n == 3)
            cout << 4  << endl;
        if(n == 4)
            cout << 3 << endl;
        if(n == 5)
            cout << 2 << endl;
        if(n == 6)
            cout << 1 << endl;     
        --t;
    }
    return 0;
}
    