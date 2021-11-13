#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmax=1e9;

ll lt(int a,int x){
    if(x == 0)
        return 1;
    else if(x == 1)
        return a;
    else{
        if(x%2 == 0)
            return lt(a,x/2)*lt(a,x/2);
        else
            return lt(a,x/2)*lt(a,x/2)*a;
    }
}

ll time(int n){
    int s=0;
    while()
}
int main(){
    freopen("DEBUG.inp","r",stdin);
    freopen("DEBUG.out","w",stdout);
    int t;
    cin >> t;
    while(t!=0){
        int x;
        cin >> x;
        cout << x*5;      
        --t;
    }
    return 0;
}
    