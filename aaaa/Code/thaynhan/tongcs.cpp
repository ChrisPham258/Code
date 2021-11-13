#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmax=1e9;

int cs(ll n){
    int s=0;
    while(n!=0){
        s+=n%10;
        n/=10;
    }
    return s;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    freopen("TONGCS.INP","r",stdin);
    freopen("TONGCS.OUT","w",stdout);
    ll n;
    cin >> n;
    cout << cs(n);
    return 0;
}
    