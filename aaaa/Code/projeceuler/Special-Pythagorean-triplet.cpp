#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmax=1e9;

int main(){
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
    
    f1(a,1,1000/3,1)
        f(b,1,1000/2,1)
            f(c,1,1000,1)
                if(a*a + b*b == c*c && a+c+b == 1000){
                    cout << a << " " << b << " " << c;
                    return 0;
                }
    return 0;
}
    