#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmax=1e9;

long long lt(ll a, ll b){
    if(b == 0)
        return 1;
    else if(b == 1)
        return a;
    else{
        if(b%2 == 1)
            return lt(a,b/2)*lt(a,b/2)*a;
        else
            return lt(a,b/2)*lt(a,b/2);
    } 
}
int main(){
    freopen("DEBUG.inp","r",stdin);
    freopen("DEBUG.out","w",stdout);
    int x;
    cin >> x;
    ll ans=0;
    while(x!=0){
        int a,c;
        cin >> a;
        c=a%10;
        a/=10;
        ans+=lt(a,c);
        --x;
    }
    cout << ans;
    return 0;
}
    