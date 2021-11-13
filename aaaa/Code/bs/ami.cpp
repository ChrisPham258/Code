#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmax=1e9;

int main(){
    freopen("DEBUG.inp","r",stdin);
    freopen("DEBUG.out","w",stdout);
    int n,k;
    cin >> n >> k;
    int a[n];
    ll s=0;
    f(i,0,n,1)
        cin >> a[i];
    sort(a+0,a+0+n);

    f(i,0,n-1,1)
        s+=a[i];

    if(a[n-1] >= k){
        a[n-1]-=k;
        s+=a[n-1];
        cout << s+1;
    }
    else
        cout << s+a[n-1];
    return 0;
}
    