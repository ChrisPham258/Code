#include<bits/stdc++.h>
using namespace std;

#define ll long long
typedef pair<int, int> ii;

const int nmx=2e5;

ll lt(ll a,ll b){
    if(b == 0)
        return 1;
    else if(b == 1)
        return a;
    else{
        if(b%2 == 0)
            return lt(a,b/2)*lt(a,b/2);
        else
            return lt(a,b/2)*lt(a,b/2)*a;
    }
}

ll gene(ll n){
    ll s=0,k=0;
    while(n!=0){
        s+=1*lt(10,k);
        ++k;
        --n;
    }
    return s;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    freopen("DEBUG.inp","r",stdin);
    freopen("DEBUG.out","w",stdout);
    int t;
    cin >> t;
    while(t!=0){
        ll n;
        cin >> n;
        cout << lt(gene(n),2) << endl;    
        --t;
    }
    
    return 0;
}
    