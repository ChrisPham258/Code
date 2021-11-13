#include<bits/stdc++.h>
using namespace std;

#define ll long long

const int nmx=2e5;

ll n,k;
vector<ll> a;
ll x[nmx];
int bs(ll x,int l,int r){
    int mid=(l+r)/2;
    while(l!=mid && mid!=r){
        if(a[mid]>x)
            r=mid;
        else
            l=mid;
        mid=(l+r)/2;
    }
    if(a[l] <= x)
        return l;
    if(a[r] <= x)
        return r;
    return -1;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
    cin >> n >> k;
    for(int i=0;i<n;++i){
        cin >> x[i];
        a.push_back(x[i]);  
    }
    sort(a.begin(),a.end());
    for(int i=0;i<k;++i){
        int cmp;
        cin >> cmp;
        int find=bs(cmp,0,a.size());
        if(find == -1)
            cout << -1 << endl;
        else{
            cout << a[find] << endl;
            a.erase(a.begin()+find);
        }
    }
    return 0;
}
    