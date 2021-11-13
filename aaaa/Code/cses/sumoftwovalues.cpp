#include<bits/stdc++.h>
using namespace std;

#define ll long long

const int nmx=2e5;

ll n,k;
vector<pair<ll,ll>> a;

int bs(int x,int l,int r){
    if(r>=l){
        int mid=(l+r)/2;
        if(a[mid].first == x)
            return mid;
        else if(a[mid].first > x)
            return bs(x,l,mid-1);
        else
            return bs(x,mid+1,r);
    }
    return -1;
}

bool cmp(pair<ll,ll> a, pair<ll,ll> b){
    return a.first < b.second;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
    cin >> n >> k;
    for(int i=0;i<n;++i){
        ll x;
        cin >> x;
        a.push_back({x,i+1});
    }
    sort(a.begin(),a.end(),cmp);
    for(int i=0;i<n;++i){
        int cmp=bs(k-a[i].first,0,n);
        if(cmp != -1 && cmp != i){
            cout << a[i].second << " " << a[cmp].second;
            return 0;
        }
    }
    cout << "IMPOSSIBLE";
    return 0;
}
    