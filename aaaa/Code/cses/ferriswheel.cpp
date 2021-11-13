#include<bits/stdc++.h>
using namespace std;

#define ll long long

const int nmx=2e5;

ll a[nmx];
ll ans;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
    ll n,k;
    cin >> n >> k;    

    for(int i=0;i<n;++i)
        cin >> a[i];
    sort(a+0,a+0+n);

    int i=0,j=n-1;
    while(i<=j){
        ++ans;
        if(k-a[i] >= a[j])
            ++i,--j;
        else
            --j;
    }
    cout << ans;
    return 0;
}
    