#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int nmax=1e9;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
    int n,m,k,ans=0;
    cin >> n >> m >> k;
    int a[n],b[m];
    
    for(int i=0;i<n;++i)
        cin >> a[i];
    
    for(int i=0;i<m;++i)
        cin >> b[i];
    
    sort(a+0,a+0+n);
    sort(b+0,b+0+m);
    int i=0,j=0;
    while(i<n){
        while(j<m && b[j]<a[i]-k)
            ++j;
        if(j<m && b[j]<=a[i]+k)
            ++ans, ++j;
        ++i;
    }
    cout << ans;
    return 0;
}
    