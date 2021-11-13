#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmax=1e9;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
    ll a,b,s,ans=0;
    cin >> a >> b >> s;
    if(s < abs(0-a)+abs(0-b))
        cout << "NO";
    else{
        if(s == abs(0-a)+abs(0-b))
            cout << "YES";
        else{
            if( (s-abs(0-a)+abs(0-b) ) %2 == 0)
                cout << "YES";
            else
                cout << "NO";
        }
    }
    return 0;
}
    