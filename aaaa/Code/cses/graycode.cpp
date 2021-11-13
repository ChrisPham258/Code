#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmx=2e5;

int a[20],n;
void bt(int u){
    for(int i=0; i<2;++i){
        a[u]=i;
        if(u == n){
            for(int j=1;j<=n;++j)
                cout << a[j];
            cout << endl;
        }
        else bt(u+1);
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
    cin >> n;
    bt(1);
    return 0;
}
