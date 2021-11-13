#include<bits/stdc++.h>
using namespace std;

#define ll long long
typedef pair<int, int> ii;

const int nmx=2e5;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
    int n,m;
    cin >> n >> m;
    int ni=(n+1)/2;

    for(int i=ni;i<=n;++i)
        if(i%m == 0){
            cout << i;
            return 0;
        }
    cout << -1;
    return 0;
}
