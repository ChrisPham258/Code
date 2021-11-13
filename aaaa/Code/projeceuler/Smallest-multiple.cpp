#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmax=1e9;

bool check(int n){
    f1(i,1,20,1)
        if(n%i != 0)
            return 0;
    return 1;
}
int main(){
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
    int n=20;
    while(1){
        if(check(n) == 0)
            ++n;
        else
            break;
    }
    cout << n;
    return 0;
}
    