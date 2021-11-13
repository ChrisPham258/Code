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
    int a,b,c;
    while(cin >> a >> b >> c){
        if(a+b-c == 0)
            cout << "yes" << endl;
        else if(a+c-b == 0)
            cout << "yes" << endl;
        else if(b+c-a == 0)
            cout << "yes" << endl;
        else 
            cout << "no" << endl;
    }
    return 0;
}
    