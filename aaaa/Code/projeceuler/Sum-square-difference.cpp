#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmax=1e9;

ll a,b;

void sums(){
    f1(i,1,100,1)
        a+= i*i;
}

void ssum(){
    b=100*101/2;
    b*=b;
}
int main(){
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
    sums();
    ssum();
    cout << abs(a-b);
    return 0;
}
    