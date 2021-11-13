#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmax=1e9;

bool solve(int n){
    int s=0;
    int i=1;
    while(s<n){
        s+=i;
        ++i;
    }
    return s == n;

}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
    int t;
    cin >> t;
    while(t!=0){
        int n;
        cin >> n;
        cout << solve(n) << endl;
        --t;
    }
    return 0;
}
    