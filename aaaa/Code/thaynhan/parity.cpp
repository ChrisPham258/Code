#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmax=1e9;

string dectobin(ll n){
    string st="";
    while(n!=0){
        st+= char(n%2 + '0');
        n/=2;
    }
    return st;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
    int t;
    cin >> t;
    while(t!=0){
        ll n,ans=0;
            cin >> n;
        string st=dectobin(n);
        f(i,0,st.size(),1)
            if(st[i] == '1')
                ++ans;
        if(ans%2 == 1)
            cout << "odd" << endl;
        else
            cout << "even" << endl;
            ;
        --t;
    }
    return 0;
}
    