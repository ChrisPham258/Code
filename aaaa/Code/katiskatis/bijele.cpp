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
    int a[6]={1,1,2,2,2,8};
    int b[6];

    for(int i=0;i<6;++i){
        cin >> b[i];
        b[i]=a[i] - b[i];
    }

    f(i,0,6,1)
        cout << b[i] << " ";
    return 0;
}
    