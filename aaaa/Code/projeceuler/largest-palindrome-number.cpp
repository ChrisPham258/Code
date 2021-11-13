#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmax=1e9;

bool pa(string st){
    int n=st.size();
    f(i,0,n/2,1)
        if(st[i] != st[n-i-1])
            return 0;
    return 1;
}

string st(int n){
    string s="";
    while(n!=0){
        s = s + char(n%10 + '0');
        n/=10;
    }
    return s;
}
int main(){
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
    int maxx=0;
    f1(i,100,999,1)
        f1(j,100,999,1)
            if( pa( st(i*j) ) == 1 )
                maxx=max(maxx,i*j);
    cout << maxx;
    return 0;
}
    