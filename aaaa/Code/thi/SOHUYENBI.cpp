#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmx=2e5;

vector<ll> d;
ll n;
ll lt(ll a,ll b){
    if(b == 0)  
        return 1;
    if(b == 1)
        return a;
    ll tmp = lt(a, b>>1)%20162017;
    if(b%2 == 0)
        return tmp*tmp%20162017;
    else 
        return tmp*tmp*a%20162017;
}

void uoc(){
    d.push_back(1);
    for(int i=2;i<=sqrt(n);++i){
        if(n%i == 0){
            int j=n/i;
            if(j != i){
                d.push_back(i);
                d.push_back(j);
            }
            else
                d.push_back(i);
        }
    }
    d.push_back(n);
}

void solve(){
    cin >> n;
    uoc();
    ll s=1;
    for(int i=0;i<d.size();++i){
        s*=(lt(3,d[i])-1)%20162017;
    }
    cout << s;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    freopen("SOHUYENBI.INP","r",stdin);
    freopen("SOHUYENBI.OUT","w",stdout);
    solve();
    return 0;
}
    