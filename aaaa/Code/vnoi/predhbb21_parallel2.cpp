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
    int t;
    cin >> t;
    while(t!=0){
        int i,f;
        cin >> i >> f;
        if( (i <= 1 && f <= 2) || (i<=2 && f<=1) )
            cout << "Yes" << endl;
        else
            cout << "No" << endl;      
        --t;
    }
    return 0;
}
    