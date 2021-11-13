#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmx=1e5+5;

int ans,l,r;
int s[nmx];

void solve(){
    for(int i=1;i*2<=nmx;++i){
        int j=i*2;
        while(j <= nmx){
            s[j]+=i;
            j+=i;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
    cin >> l >> r;
    solve();
    for(int i=l;i<=r;++i)
        if(s[i] > i)
            ++ans;
    cout << ans;
    return 0;
}
    