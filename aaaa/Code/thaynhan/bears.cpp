#include<bits/stdc++.h>
using namespace std;

#define ll long long
typedef pair<int, int> ii;

const int nmx=2e5;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
    int a,b,ans=0,x,y;
    cin >> a >> b;
    while(a <= b){
        a*=3;
        b*=2;
        ++ans;
    }
    cout << ans;
    return 0;
}
    