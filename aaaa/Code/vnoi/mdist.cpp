#include<bits/stdc++.h>
using namespace std;

#define ll long long
typedef pair<int, int> ii;

const int nmx=2e5;

int n,ans=INT_MIN,a[105],b[105];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    freopen("DEBUG.inp","r",stdin);
    freopen("DEBUG.out","w",stdout);
    cin >> n;
    for(int i=0;i<n;++i)
        cin >> a[i] >> b[i];
    
    for(int i=0;i<n-1;++i)
        for(int j=i+1;j<n;++j)
        ans=max(ans,abs(a[i]-a[j])+abs(b[i]-b[j]));
    cout << ans;
    return 0;
}
    