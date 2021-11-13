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
    ll n,a,b,cmp,x,y;
    cin >> n >> a >> b;
    x=a,y=b;
    cmp = 6*n;
    while(a*b<cmp){
        ++a;
    }
    while(x*y < cmp){
        ++y;
    }
    if(x*y < a*b){
        cout << x*y << endl;
        cout << x << " " << y;
    }
    else{
        cout << a*b << endl;
        cout << a << " " << b;
    }  
    return 0;
}
    