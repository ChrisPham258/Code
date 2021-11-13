#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmax=1e9;

int main(){
    freopen("DEBUG.inp","r",stdin);
    freopen("DEBUG.out","w",stdout);
    int h,m;
    cin >> h >> m;
        if(m >= 45)
            m-=45;
        else{
            --h;
            m=abs(m-45);
            m=60-m;
        }
    if(h == -1)
        h=23;
    cout << h << " " << m;
    return 0;
}
    