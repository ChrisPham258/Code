#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmax=1e9;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    freopen("DEBUG.inp","r",stdin);
    freopen("DEBUG.out","w",stdout);
    int n,ans=0;
    cin >> n;
    int a[n];

    f(i,0,n,1)
        cin >> a[i];

    f(i,0,n-1,1)
        f(j,i+1,n,1)
            if(i*a[i] > j*a[j])
                ++ans;
    cout << ans;
    return 0;
}

