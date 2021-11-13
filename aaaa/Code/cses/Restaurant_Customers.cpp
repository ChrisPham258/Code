#include<bits/stdc++.h>
using namespace std;

#define ll long long

const int nmx=100;

vector<pair<ll,ll>> a;
ll n;

bool cmp(pair<ll,ll> a, pair<ll, ll> b){
    return a.first < b.first;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    freopen("DEBUG.inp","r",stdin);
    freopen("DEBUG.out","w",stdout);
    cin >> n;
    for(int i=0;i<n;++i){
        ll x,y;
        cin >> x >> y;
        a.push_back({x,y});
    }
    sort(a.begin(),a.end(),cmp);

    for(int i=0;i<n;++i)
        cout << a[i].first << " " << a[i].second << endl;

    for(int i=0;i<n;++i){
        
    }
    return 0;  
}
    